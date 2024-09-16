/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:37:01 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 18:21:39 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

A_Animal::A_Animal(void)
{
	std::cout << "Animal created" << std::endl;
}

A_Animal::A_Animal(const A_Animal &copy)
{
	_type = copy._type;
	std::cout << "Animal created" << std::endl;
}

A_Animal	&A_Animal::operator=(const A_Animal &copy)
{
	_type = copy._type;
	std::cout << "Animal created" << std::endl;
	return (*this);
}

A_Animal::~A_Animal(void)
{
	std::cout << "Animal destroyed" << std::endl;
}

void	A_Animal::makeSound(void)
{
	std::cout << "* Silence *" << std::endl;
}
