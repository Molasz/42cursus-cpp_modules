/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:04:17 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/15 18:22:33 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define	SIZE 100

void	isEven(int n)
{
	std::cout << n << " is ";
	if (n % 2 == 0)
		std::cout << "Even";
	else
		std::cout << "Odd";
	std::cout << std::endl;
}

void	print(std::string str)
{
	std::cout << str << std::endl;
}

int	main(void)
{
	std::string	strs[SIZE];
	int			nums[SIZE];

	for(int i = 0; i < SIZE; i++)
	{
		strs[i] = "HOLA";
		nums[i] = i;
	}

	iter(strs, SIZE, print);
	iter(nums, SIZE, isEven);

	return (0);
}
