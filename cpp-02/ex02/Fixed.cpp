/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:46:55 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/12 18:35:27 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_frac = 8;

Fixed::Fixed(void)
{
	_value = 0;
}

Fixed::Fixed(const int value)
{ 
	_value = value << _frac;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _frac));
}

Fixed::Fixed(Fixed const &copy)
{
	_value = copy.getRawBits();
}

Fixed&Fixed::operator=(const Fixed &copy)
{
	_value = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
}

int	Fixed::getRawBits(void) const
{
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

bool	Fixed::operator<(Fixed other) const
{
	return (_value < other._value);
}

bool	Fixed::operator>(Fixed other) const
{
	return (_value > other._value);
}

bool	Fixed::operator<=(Fixed other) const
{
	return (_value <= other._value);
}

bool	Fixed::operator>=(Fixed other) const
{
	return (_value >= other._value);
}

float	Fixed::operator+(Fixed other) const
{
	return (toFloat() + other.toFloat());	
}

float	Fixed::operator-(Fixed other) const
{
	return (toFloat() - other.toFloat());	
}

float	Fixed::operator*(Fixed other) const
{
	return (toFloat() * other.toFloat());	
}

float	Fixed::operator/(Fixed other) const
{
	return (toFloat() / other.toFloat());	
}

Fixed	&Fixed::operator++(void)
{
	_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	_value++;
	return (tmp);
}


Fixed	&Fixed::operator--(void)
{
	--_value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	_value--;
	return (tmp);
}

const Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

const Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() > b.toFloat())
		return (b);
	return (a);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}
