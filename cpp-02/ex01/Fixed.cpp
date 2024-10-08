/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:46:55 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/06 17:07:15 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_frac = 8;

Fixed::Fixed(void)
{
	std::cout << "Fixed: Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const int value)
{ 
	std::cout << "Fixed: Int constructor called" << std::endl;
	_value = value << _frac;
}

Fixed::Fixed(const float value)
{
	std::cout << "Fixed: Float constructor called" << std::endl;
	_value = roundf(value * (1 << _frac));
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

int	Fixed::toInt(void) const
{
	return (_value >> _frac);
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _frac));
}

std::ostream&	operator<<(std::ostream &str, Fixed const &fix)
{
	str << fix.toFloat();
	return str;
}
