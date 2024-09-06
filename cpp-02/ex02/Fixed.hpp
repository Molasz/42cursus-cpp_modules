/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:35:48 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/06 17:53:24 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED__HPP
# define FIXED__HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_frac;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const &copy);
		Fixed& operator=(const Fixed &copy);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator<(Fixed const other) const;
		bool	operator>(Fixed const other) const;
		bool	operator<=(Fixed const other) const;
		bool	operator>=(Fixed const other) const;
		bool	operator==(Fixed const other) const;
		bool	operator!=(Fixed const other) const;

		float	operator+(Fixed const other) const;
		float	operator-(Fixed const other) const;
		float	operator/(Fixed const other) const;
		float	operator*(Fixed const other) const;

		Fixed	&operator++(void);
		Fixed	&operator++(int);
		Fixed	&operator--(void);
		Fixed	&operator--(int);

		static const Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);
};

std::ostream&	operator<<(std::ostream &str, Fixed const &fix);

#endif
