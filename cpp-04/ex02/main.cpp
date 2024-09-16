/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:50:48 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 18:24:05 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	int	n = 100;
	A_Animal	*animals[100];
	for (int i = 0; i < n / 2; i++)
	{
		animals[i] = new Dog();
		animals[i + n / 2] = new Cat();
	}
	for (int i = 0; i < n; i ++)
		delete animals[i];
	std::cout << "END" << std::endl;

	Dog	dog;
	Dog	dogCopy = Dog(dog);

	std::cout << "DOG ideas: "  << dog.getBrain()->getIdeas()[12]  << std::endl;
	std::cout << "DOG COPY ideas: "  << dogCopy.getBrain()->getIdeas()[12] << std::endl;

	/*
	A_Animal	animal;
	animal.makeSound;
	*/

	return (0);
}
