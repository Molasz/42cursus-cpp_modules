/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:46:57 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 18:18:12 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): A_Animal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog created NORMAL" << std::endl;
}

Dog::Dog(const Dog &copy): A_Animal()
{
	_type = copy._type;
	_brain = new Brain();
	std::cout << "Dog created COPY" << std::endl;
}


Dog	&Dog::operator=(const Dog &copy)
{
	_type = copy._type;
	_brain = new Brain();
	std::cout << "Dog created EQUAL" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog destroyed" << std::endl;
}

void	Dog::makeSound(void)
{
	std::cout << "Bup bup" << std::endl;
}

Brain	*Dog::getBrain(void)
{
	return (_brain);
}
