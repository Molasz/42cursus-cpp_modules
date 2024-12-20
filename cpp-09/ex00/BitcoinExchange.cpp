/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:52:18 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/20 19:21:52 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	readDb("data.csv");
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const char *dbFile)
{
	readDb(dbFile);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &ref)
{
	*this = ref;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &ref)
{
	btcValues = ref.btcValues;
	return (*this);
}

void	BitcoinExchange::readInputFile(char *file)
{
	std::ifstream	inputFile(file);
	std::string		line;

	if (!inputFile.is_open())
		throw inputFileException();
	getline(inputFile, line);
	if ("date | value" != line)
		throw inputFileException();
	while (getline (inputFile, line))
	{
		try
		{
			readInputLine(line);
		}
		catch (std::exception &err)
		{
			std::cout << "Error on input file: " << err.what() << std::endl;
		}
	}
	inputFile.close();
}

void	BitcoinExchange::readInputLine(const std::string &line)
{
	std::string	date, value, sep;
	double		fValue, result;

	date = line.substr(0, 10);
	sep = line.substr(10, 3);
	value = line.substr(13);
	if (!validateDate(date))
		throw dateException();
	if (!validateFloatDigits(value) || sep != " | ")
		throw valueException();
	fValue = stof(value);
	if (fValue > 2147483647.0)
		throw maxValueException();
	result = getBtcValue(date) * fValue;
	std::cout << "[" << date << "] " << fValue << "btc -> " << result << "$" << std::endl;
}

void	BitcoinExchange::readDb(const char *file)
{
	std::ifstream	dbFile(file);
	std::string		line;

	if (!dbFile.is_open())
		throw dbFileException();
	getline(dbFile, line);
	if ("date,exchange_rate" != line)
		throw dbFileException();
	while (getline (dbFile, line))
	{
		try
		{
			readDbLine(line);
		}
		catch (std::exception &err)
		{
			std::cout << "Error on db file: " << err.what() << std::endl;
		}
	}
	dbFile.close();
}

void	BitcoinExchange::readDbLine(const std::string &line)
{
	std::string	date, value;
	std::time_t	time;
	double		fValue;

	date = line.substr(0, 10);
	value = line.substr(11);
	if (!validateDate(date))
		throw dateException();
	if (!validateFloatDigits(value) || line[10] != ',')
		throw valueException();
	time = getDate(date);
	fValue = stof(value);
	if (fValue > 2147483647.0)
		throw maxValueException();
	btcValues[time] = fValue;
}

bool	BitcoinExchange::validateDigits(const std::string &str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool	BitcoinExchange::validateFloatDigits(const std::string &str)
{
	bool	hasDot = false;

	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			if (!hasDot && str[i] == '.')
				hasDot = true;
			else
				return (false);
		}
	}
	return (true);
}

bool	BitcoinExchange::validateDate(const std::string &date)
{
	std::string			year, month, day;
	int					nYear, nMonth, nDay;
	bool				isYearLeap;

	if (date[4] != '-' || date[7] != '-')
		return (false);
	year = date.substr(0, 4);
	month = date.substr(5,2);
	day = date.substr(8,2);
	if (!validateDigits(year) || !validateDigits(month) || !validateDigits(day))
		return (false);
	nYear = stof(year);
	nMonth = stof(month);
	nDay = stof(day);
	isYearLeap = nYear % 4 == 0;
	if (nMonth < 1 || nMonth > 12 || nDay < 1)
		return (false);
	switch (nMonth)
	{
		case 2:
			return (isYearLeap ? nDay <= 29 : nDay <= 28);
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return (nDay <= 31);
		default:
			return (nDay <= 30);
	}
	return (true);
}

double	BitcoinExchange::stof(const std::string &str)
{
	std::stringstream	ss;
	double				f;

	ss << str;
	ss >> f;
	return (f);
}

double	BitcoinExchange::getBtcValue(const std::string &date)
{
	std::map<std::time_t, double>::iterator i, save;
	time_t	time = getDate(date);
	int		diff = -1;

	for (i = btcValues.begin(); i != btcValues.end(); i++)
	{
		if ((diff < 0 || time - i->first < diff) && time - i->first >= 0)
		{
			diff = time - i->first;
			save = i;
		}	
	}
	if (diff == -1)
		throw noDbValueException();
	return (save->second);
}

std::time_t BitcoinExchange::getDate(const std::string &date)
{
	int	day, month, year;
	tm time = {};

	year = stof(date.substr(0,4));
	month = stof(date.substr(0,4));
	day = stof(date.substr(0,4));
	
	time.tm_year = stof(date.substr(0,4)) - 1900;
    time.tm_mon = stof(date.substr(5, 2)) - 1;
    time.tm_mday = stof(date.substr(8,2));
	return (std::mktime(&time));
}
