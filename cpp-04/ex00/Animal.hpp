/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:28:00 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 10:34:38 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(const Animal &copy);
		Animal	&operator=(const Animal &copy);
		~Animal(void);
		std::string	getType(void);
};
#endif
