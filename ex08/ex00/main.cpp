/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:58:02 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/28 20:00:03 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define SIZE 10

int	main(void)
{
	std::deque<int>	items;
	int	n;
	
	srand(time(0));

	for (int i = 0; i < SIZE; i++)
		items.push_back(i);
	
	for (int i = 0; i < SIZE; i++)
	{
		try
		{
			n = rand() % SIZE * 2 + 1;
			easyfind(items, n);
			std::cout << n << " found in container" << std::endl;
		} catch (std::exception err) {
			std::cout << n << " not found in container" << std::endl;
		}
	}
	return (0);
}
