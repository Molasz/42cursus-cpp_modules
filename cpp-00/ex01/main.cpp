/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:10:38 by molasz-a          #+#    #+#             */
/*   Updated: 2024/08/17 16:20:00 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	add(PhoneBook *phoneBook)
{
	std::string	str;

	while (true)
	{
		if (!phoneBook->add())
			break;
		std::cout << "Retry: Y/n: ";
		getline(std::cin, str);
		if (str == "n" || str == "N")
			break;
	}
}

int	main(int argc, char **argv)
{
	PhoneBook	phoneBook;
	std::string	str;

	(void) argv;
	if (argc != 1)
		std::cout << "Arguments not allowed" << std::endl;
	while (true)
	{
		std:: cout << "Input command" << std::endl;
		std::getline(std::cin, str);
		if (str == "ADD")
			add(&phoneBook);
		else if (str == "SEARCH")
			phoneBook.search();
		else if (str == "EXIT")
			break;
	}
	return (0);
}
