/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:40:46 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 13:32:10 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	_type = "Wrong Cat";
	std::cout << "Wrong Cat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal()
{
	_type = copy._type;
	std::cout << "Wrong Cat created" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
	_type = copy._type;
	std::cout << "WrongCat created" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroyed" << std::endl;
}

void	WrongCat::makeSound(void)
{
	std::cout << "wrong meeeeeeeeew" << std::endl;
}
