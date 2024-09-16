/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:40:46 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 10:55:15 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	_type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	_type = copy._type;
	std::cout << "Cat created" << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	_type = copy._type;
	std::cout << "Cat created" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed" << std::endl;
}

void	Cat::makeSound(void)
{
	std::cout << "meeeeeeeeew" << std::endl;
}
