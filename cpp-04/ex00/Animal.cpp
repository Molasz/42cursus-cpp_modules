/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:37:01 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 13:22:09 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	_type = copy._type;
	std::cout << "Animal created" << std::endl;
}

Animal	&Animal::operator=(const Animal &copy)
{
	_type = copy._type;
	std::cout << "Animal created" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destroyed" << std::endl;
}

void	Animal::makeSound(void)
{
	std::cout << "* Silence *" << std::endl;
}
