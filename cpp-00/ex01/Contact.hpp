/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:01:42 by molasz-a          #+#    #+#             */
/*   Updated: 2024/08/17 12:21:55 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string _fName;
		std::string _sName;
		std::string _nick;
		std::string _phone;
		std::string _secret;
	public:
		Contact(void);
		~Contact(void);
		std::string getfName(void) const;
		std::string getsName(void) const;
		std::string getNick(void) const;
		std::string getPhone(void) const;
		std::string getSecret(void) const;
		void setfName(std::string);
		void setsName(std::string);
		void setNick(std::string);
		void setPhone(std::string);
		void setSecret(std::string);
};

#endif
