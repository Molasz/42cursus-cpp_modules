/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:33:03 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/02 17:37:18 by molasz-a         ###   ########.fr       */
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

void	convert(std::string &str)
{

}
