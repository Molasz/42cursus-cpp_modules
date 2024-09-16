/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:28:00 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 18:20:58 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class A_Animal
{
	protected:
		std::string	_type;
	public:
		A_Animal(void);
		A_Animal(const A_Animal &copy);
		A_Animal	&operator=(const A_Animal &copy);
		virtual ~A_Animal(void);
		virtual	void	makeSound(void) = 0;
};

#endif
