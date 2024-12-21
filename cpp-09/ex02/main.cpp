/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:58:02 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/21 18:34:16 by molasz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	PmergeMe	pmergeMe;

	if (argc < 2)
		std::cout << "At least 1 number is required" << std::endl;
	else
	{
		try
		{
			pmergeMe.sort(argv + 1);
		}
		catch (std::exception &err)
		{
			std::cout << err.what() << std::endl;
		}
	}
	return (0);
}
