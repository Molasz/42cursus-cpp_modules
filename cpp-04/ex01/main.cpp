/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:50:48 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 17:53:34 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	int	n = 100;
	Animal	*animals[100];
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

	Dog base;
	{
		Dog tmp(base);
	}

	return (0);
}
