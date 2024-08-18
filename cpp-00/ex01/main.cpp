/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:10:38 by molasz-a          #+#    #+#             */
/*   Updated: 2024/08/18 17:00:13 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phoneBook;
	std::string	str;

	(void) argv;
	if (argc != 1)
		return (std::cout << "Arguments not allowed" << std::endl, 1);
	while (!std::cin.eof())
	{
		std:: cout << "> Input command" << std::endl;
		std::getline(std::cin, str);
		if (str == "ADD")
			phoneBook.add();
		else if (str == "SEARCH")
			phoneBook.search();
		else if (str == "EXIT")
			break;
	}
	return (0);
}
