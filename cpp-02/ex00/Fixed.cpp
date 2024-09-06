/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:46:55 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/06 13:58:22 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_frac = 8;

Fixed::Fixed(void)
{
	std::cout << "Fixed: Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Fixed: Copy constructor called" << std::endl;
	_value = copy.getRawBits();
}

Fixed&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Fixed: Assign constructor called" << std::endl;
	_value = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed: Destroyed" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "Fixed: getRawBits called" << std::endl;
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}
