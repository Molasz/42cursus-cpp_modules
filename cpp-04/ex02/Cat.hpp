/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:31:31 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 18:17:00 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public A_Animal
{
	private:
		Brain	*_brain;
	public:
		Cat(void);
		Cat(const Cat &copy);
		Cat	&operator=(const Cat &copy);
		~Cat(void);
		void	makeSound(void);
		Brain	*getBrain(void);
};

#endif
