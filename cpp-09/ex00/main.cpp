/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:58:02 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/20 19:16:07 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	BitcoinExchange *exchange = NULL;

	if (argc < 2 || argc > 3)
		std::cout << "Wrong input <<./btc filename>>" << std::endl;
	else
	{
		try
		{
			if (argc == 2) exchange = new BitcoinExchange();
			else exchange = new BitcoinExchange(argv[2]);
			exchange->readInputFile(argv[1]);
		}
		catch (std::exception &err)
		{
			std::cout << err.what() << std::endl;
		}
		if (exchange)
			delete exchange;
	}
	return (0);
}
