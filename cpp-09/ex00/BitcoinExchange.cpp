/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:52:18 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/18 12:44:51 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	readDb("data.csv");
}

BitcoinExchange::BitcoinExchange(const std::string &dbFile) {
	readDb(dbFile);
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &ref) {
	*this = ref;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &ref) {
	btcValues = ref.btcValues;
	return (*this);
}

void	BitcoinExchange::calcBtc(char *file)
{
}

void	BitcoinExchange::readDb(const std::string &file)
{
	std::ifstream	dbFile(file);
	std::string		line;

	if (!dbFile.is_open())
		throw dbFileException();
	getline(dbFile, line);
	if (!validateDbFirstLine(line))
		throw dbFileException();
	while (getline (dbFile, line)) {
		if (validateDbLine(line)) std::cout << line;
	}
	dbFile.close();
}

bool	BitcoinExchange::validateDbLine(const std::string &line) {
	
	
}
