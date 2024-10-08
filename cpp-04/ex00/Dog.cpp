/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:46:57 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 10:54:52 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	_type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &copy): Animal()
{
	_type = copy._type;
	std::cout << "Dog created" << std::endl;
}


Dog	&Dog::operator=(const Dog &copy)
{
	_type = copy._type;
	std::cout << "Dog created" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed" << std::endl;
}

void	Dog::makeSound(void)
{
	std::cout << "Bup bup" << std::endl;
}

