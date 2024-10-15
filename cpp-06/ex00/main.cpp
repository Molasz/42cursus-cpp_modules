/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:12:19 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/15 11:33:26 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	//ScalarConverter	convert;
	std::string	str;
	if (argc == 1)
		return (1);
	for (int i = 1; argv[i] ; i++)
	{
		str = argv[i];
		ScalarConverter::convert(str);
	}
}
