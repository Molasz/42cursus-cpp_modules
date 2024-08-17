/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:26:29 by molasz-a          #+#    #+#             */
/*   Updated: 2024/08/17 16:38:01 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

static bool	validateAlpha(std::string str)
{
	for(int i = 0; str[i]; i++)
	{
		if (!(isalpha(str[i]) || str[i] == ' '))
			return (true);
	}
	return (false);
}

static bool	validatePhone(std::string str)
{
	if (str.length() != 9)
		return (true);
	for(int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (true);
	}
	return (false);
}

int	PhoneBook::add(void)
{
	Contact		contact;
	Contact		saveContact;
	std::string	str;

	std::cout << "First name (only alphabetic characters are allowed): ";
	std::getline(std::cin, str);
	if (str.empty() || validateAlpha(str))
		return (std::cout << "Invalid first name" << std::endl, 1);
	contact.setfName(str);
	std::cout << "Second name (only alphabetic characters are allowed): ";
	std::getline(std::cin, str);
	if (str.empty() || validateAlpha(str))
		return (std::cout << "Invalid second name" << std::endl, 1);
	contact.setsName(str);
	std::cout << "Nickname: ";
	std::getline(std::cin, str);
	if (str.empty())
		return (std::cout << "Invalid nickname" << std::endl, 1);
	contact.setNick(str);
	std::cout << "Phone (only 9 numeric characters are allowed): ";
	std::getline(std::cin, str);
	if (str.empty() || validatePhone(str))
		return (std::cout << "Invalid phone" << std::endl, 1);
	contact.setPhone(str);
	std::cout << "Dark secret: ";
	std::getline(std::cin, str);
	if (str.empty())
		return (std::cout << "Invalid secret" << std::endl, 1);
	contact.setSecret(str);
	for(int i = 0; i < 8 && !contact.getfName().empty(); i++)
	{
		saveContact = this->contacts[i];
		this->contacts[i] = contact;
		contact = saveContact;
	}
	return (0);
}

static std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + '.');
	return (str);
}

static void	printContact(Contact contact)
{
	std::cout << "First name: " << contact.getfName() << std::endl;
	std::cout << "Second name: " << contact.getsName() << std::endl;
	std::cout << "Nickname: " << contact.getNick() << std::endl;
	std::cout << "Phone: " << contact.getPhone() << std::endl;
	std::cout << "Dark secret: " << contact.getSecret() << std::endl;
}

void	PhoneBook::search(void)
{
	std::string	str;

	if (this->contacts[0].getfName().empty())
		std::cout << "PhoneBook empty" << std::endl;
	else
	{
		std::cout << "|     Index| FirstName|SecondName|  NickName|" << std::endl;
		for(int i = 0; i < 8; i++)
		{
			if (this->contacts[i].getfName().empty())
				break;
			std::cout << '|' << std::setw(10) << i + 1;
			std::cout << '|' << std::setw(10) << truncate(this->contacts[i].getfName());
			std::cout << '|' << std::setw(10) << truncate(this->contacts[i].getsName());
			std::cout << '|' << std::setw(10) << truncate(this->contacts[i].getNick());
			std::cout << '|' << std::endl;
		}
	}
	while(!std::cin.eof())
	{
		std::cout << "Select index: ";
		getline(std::cin, str);
		if (str.length() == 1 && str[0] >= '0' && str[0] <= '8')
			break;
		std::cout << "Wrong index" << std::endl;
	}
	printContact(this->contacts[str[0] - '0' - 1]);
}
