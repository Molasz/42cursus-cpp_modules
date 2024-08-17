/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:26:29 by molasz-a          #+#    #+#             */
/*   Updated: 2024/08/17 18:31:37 by molasz-a         ###   ########.fr       */
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
			return (false);
	}
	return (true);
}

static bool	validateDigits(std::string str)
{
	if (str.length() != 9)
		return (false);
	for(int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

int	PhoneBook::validatefName(Contact *contact)
{
	std::string	str;

	while(!std::cin.eof())
	{
		std::cout << "First name (only alphabetic characters are allowed): ";
		std::getline(std::cin, str);
		if (!str.empty() && validateAlpha(str))
			break;
		std::cout << "Invalid first name. Retry: Y/n ";
		getline(std::cin, str);
		if (str == "n" || str == "N")
			return (true);
	}
	contact->setfName(str);
	return (false);
}

int	PhoneBook::validatesName(Contact *contact)
{
	std::string	str;

	while(!std::cin.eof())
	{
		std::cout << "Second name (only alphabetic characters are allowed): ";
		std::getline(std::cin, str);
		if (!str.empty() && validateAlpha(str))
			break;
		std::cout << "Invalid second name. Retry: Y/n ";
		getline(std::cin, str);
		if (str == "n" || str == "N")
			return (true);
	}
	contact->setsName(str);
	return (false);
}

int	PhoneBook::validateNick(Contact *contact)
{
	std::string	str;

	while(!std::cin.eof())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, str);
		if (!str.empty())
			break;
		std::cout << "Invalid nickname. Retry: Y/n ";
		getline(std::cin, str);
		if (str == "n" || str == "N")
			return (true);
	}
	contact->setNick(str);
	return (false);
}

int	PhoneBook::validatePhone(Contact *contact)
{
	std::string	str;

	while(!std::cin.eof())
	{
		std::cout << "Phone (9 digits required): ";
		std::getline(std::cin, str);
		if (!str.empty() && validateDigits(str))
			break;
		std::cout << "Invalid phone. Retry: Y/n ";
		getline(std::cin, str);
		if (str == "n" || str == "N")
			return (true);
	}
	contact->setPhone(str);
	return (false);
}

int	PhoneBook::validateSecret(Contact *contact)
{
	std::string	str;

	while(!std::cin.eof())
	{
		std::cout << "Dark secret: ";
		std::getline(std::cin, str);
		if (!str.empty())
			break;
		std::cout << "Invalid secret. Retry: Y/n ";
		getline(std::cin, str);
		if (str == "n" || str == "N")
			return (true);
	}
	contact->setSecret(str);
	return (false);
}

void	PhoneBook::add(void)
{
	Contact		contact;
	Contact		saveContact;

	if (validatefName(&contact) || validatesName(&contact)
		|| validateNick(&contact) || validatePhone(&contact)
		|| validateSecret(&contact))
		return ;
	for(int i = 0; i < 8 && !contact.getfName().empty(); i++)
	{
		saveContact = this->contacts[i];
		this->contacts[i] = contact;
		contact = saveContact;
	}
}

static std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + '.');
	return (str);
}

static void	printContact(Contact contact)
{
	if (contact.getfName().empty())
		return ;
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
	{
		std::cout << "PhoneBook empty" << std::endl;
		return;
	}
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
	while(!std::cin.eof())
	{
		std::cout << "Select index: ";
		getline(std::cin, str);
		if (str.length() == 1 && str[0] >= '1' && str[0] <= '8')
			break;
		std::cout << "Wrong index" << std::endl;
	}
	printContact(this->contacts[str[0] - '0' - 1]);
}
