/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:35:48 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/06 13:52:51 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED__HPP
# define FIXED__HPP

#include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_frac;
	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed& operator=(const Fixed &copy);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
