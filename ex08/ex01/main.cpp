/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:58:02 by molasz-a          #+#    #+#             */
/*   Updated: 2024/11/05 13:16:52 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define SIZE 10000

int	main(void)
{
	Span sp = Span(SIZE);
	Span spRange =  Span(SIZE);
	std::vector<int>	nums;

	for (int i = 0; i < SIZE; i++)
	{
		nums.push_back(i);
	}

	srand(time(0));

	for (int i = 0; i < SIZE; i++)
	{
		try {
			sp.addNumber(rand() % SIZE * 2 + 1);
		} catch (std::exception &err)
		{
			std::cout << err.what() << std::endl;
		}
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	spRange.addRange(nums.begin(), nums.end());

	std::cout << spRange.shortestSpan() << std::endl;
	std::cout << spRange.longestSpan() << std::endl;

	spRange = sp;

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0);
}
