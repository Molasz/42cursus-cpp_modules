/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:33:03 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/14 11:53:24 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &ref)
{
	(void)ref;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &ref)
{
	(void)ref;
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

bool	ScalarConverter::_isInt(std::string &str)
{
	size_t	i = 0;

	if (str[0] =='-')
		i++;
	while (i < str.length())
	{
		if (!isdigit(str[i]))
			return false;
		i++;
	}
	return (true);
}

bool	ScalarConverter::_isFloat(std::string &str)
{
	size_t	i = 0;
	bool	dot = false;

	if (str == "+inff" || str == "-inff" || str == "nanf")
		return (true);
	if (str[0] == '-')
		i++;
	while (i < str.length())
	{
		if (str[i] == 'f' && i == str.length() - 1)
			return (true);
		else if (str[i] == '.' && !dot)
			dot = true;
		else if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (dot);
}

bool	ScalarConverter::_isDouble(std::string &str)
{
	size_t	i = 0;
	bool	dot = false;

	if (str == "+inf" || str == "-inf" || str == "nan")
		return (true);
	if (str[0] =='-')
		i++;
	while (i < str.length())
	{
		if (str[i] == '.' && !dot)
			dot = true;
		else if (!isdigit(str[i]))
			return (false);
		i++;
	}
	return (dot);
}

bool	ScalarConverter::_isChar(std::string &str)
{
	return (str.length() == 1 && isprint(str[0]) && !isdigit(str[0]));
}

bool	ScalarConverter::_isSpecial(std::string &str)
{
	return (str == "nan" || str == "nanf"
			|| str == "+inf" || str == "+inff"
			|| str == "-inf" || str == "-inff");
}

InputType	ScalarConverter::_getType(std::string &str)
{
	if (str.empty())
		return (ERROR);
	if (_isInt(str))
		return (INT);
	if (_isDouble(str))
		return (DOUBLE);
	if (_isFloat(str))
		return (FLOAT);
	if (_isChar(str))
		return (CHAR);
	return (ERROR);
}

long	ScalarConverter::_strtol(std::string &str)
{
	std::stringstream	s;
	long				n;

	s << str;
	s >> n;
	return (n);
}

int		ScalarConverter::_countDecimals(std::string &str)
{
	int	i = 0;

	while (str[i] && str[i] != '.')
		i++;
	return(i);
}

void	ScalarConverter::_print(std::string &str, long i, float f, double d, char c)
{
	std::string	decimal = (long)f == f && _countDecimals(str) < 7 ? ".0" : "";
	std::string	c_str(1, c);

	std::cout << "STR: " << str << std::endl;
	if (_isSpecial(str) || i > INT_MAX || i < INT_MIN)
		std::cout << "INT: impossible" << std::endl;
	else
		std::cout << "INT: " << (i) << std::endl;
	std::cout << "FLOAT: " << f << decimal << 'f' << std::endl
		<<"DOUBLE: " << d << decimal << std::endl
		<< "CHAR: " << (isprint(c) && i >= 32 && i <= 126 ? "'" + c_str + "'" : "No printable") << std::endl
		<< std::endl;
}

void	ScalarConverter::convert(std::string &str)
{
	InputType	type = _getType(str);
	long		i;
	char		c;
	double		d;
	float		f;

	switch (type)
	{
		case INT:
			i = _strtol(str);
			c = static_cast<char>(i);
			d = static_cast<double>(i);
			f = static_cast<float>(i);
			break;
		case DOUBLE:
			d = std::strtod(str.c_str(), NULL);
			i = static_cast<long>(d);
			c = static_cast<char>(d);
			f = static_cast<float>(d);
			break;
		case FLOAT:
			f = std::strtof(str.c_str(), NULL);
			i = static_cast<long>(f);
			c = static_cast<char>(f);
			d = static_cast<double>(f);
			break;
		case CHAR:
			c = str[0];
			i = static_cast<long>(c);
			d = static_cast<double>(c);
			f = static_cast<float>(c);
			break;
		default:
			std::cout << "Str: " << str << std::endl
				<< "Bad input" << std::endl << std::endl;
			return;
	}
	_print(str, i, f, d, c);
}
