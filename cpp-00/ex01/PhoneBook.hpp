/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:07:48 by molasz-a          #+#    #+#             */
/*   Updated: 2024/08/24 21:26:39 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		bool	validatefName(Contact *);
		bool	validatesName(Contact *);
		bool	validateNick(Contact *);
		bool	validatePhone(Contact *);
		bool	validateSecret(Contact *);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void);
};

#endif
