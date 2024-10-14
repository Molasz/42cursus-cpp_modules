/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:33:05 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/14 11:52:00 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <limits.h>

enum	InputType
{
	INT,
	FLOAT,
	DOUBLE,
	CHAR,
	ERROR
};

class ScalarConverter
{
	private:
		static bool			_isInt(std::string &str);
		static bool			_isFloat(std::string &str);
		static bool			_isDouble(std::string &str);
		static bool			_isChar(std::string &str);
		static bool			_isSpecial(std::string &str);
		static InputType	_getType(std::string &str);
		static int			_countDecimals(std::string &str);
		static long			_strtol(std::string &str);
		static void			_print(std::string &str, long i, float f, double d, char c);
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &ref);
		ScalarConverter	&operator=(const ScalarConverter &ref);
		~ScalarConverter();
		static void	convert(std::string &str);
};
