/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:12:19 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/14 14:15:13 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base	*base;

	std::srand(std::time(NULL));
	for (int i = 0; i < 10; i++)
	{
		base = generate();
		std::cout << i << ": ";
		identify(base);
		std::cout << " ";
		identify(*base);
		std::cout << std::endl;
		delete base;
	}
}
