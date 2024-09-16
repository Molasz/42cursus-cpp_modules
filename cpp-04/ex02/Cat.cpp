/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:40:46 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 18:18:21 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): A_Animal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &copy): A_Animal()
{
	_type = copy._type;
	_brain = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat	&Cat::operator=(const Cat &copy)
{
	_type = copy._type;
	_brain = new Brain();
	std::cout << "Cat created" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destroyed" << std::endl;
}

void	Cat::makeSound(void)
{
	std::cout << "meeeeeeeeew" << std::endl;
}

Brain	*Cat::getBrain(void)
{
	return (_brain);
}
