/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:17:18 by molasz-a          #+#    #+#             */
/*   Updated: 2024/08/17 18:04:09 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::getfName(void) const
{
	return (this->_fName);
}

std::string	Contact::getsName(void) const
{
	return (this->_sName);
}

std::string	Contact::getNick(void) const
{
	return (this->_nick);
}

std::string	Contact::getPhone(void) const
{
	return (this->_phone);
}

std::string	Contact::getSecret(void) const
{
	return (this->_secret);
}

void	Contact::setfName(std::string name)
{
	this->_fName = name;
}

void	Contact::setsName(std::string name)
{
	this->_sName = name;
}

void	Contact::setNick(std::string nick)
{
	this->_nick = nick;
}

void	Contact::setPhone(std::string phone)
{
	this->_phone = phone;
}

void	Contact::setSecret(std::string secret)
{
	this->_secret = secret;
}
