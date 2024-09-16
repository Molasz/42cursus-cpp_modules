/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:36:06 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 18:17:10 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public A_Animal
{
	private:
		Brain	*_brain;
	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog	&operator=(const Dog &copy);
		~Dog(void);
		void	makeSound(void);
		Brain	*getBrain(void);
};
#endif

