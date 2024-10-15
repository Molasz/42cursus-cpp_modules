/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:38:10 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/15 18:00:25 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	int			a = 5, b = 42;
	char		c = 'c', d = 'd';
	std::string	y = "HOLA", z = "MUNDO";

	std::cout << "INT Min [" << a << ", " << b << "] " << min(a,b) << std::endl;
	std::cout << "CHAR Min [" << c << ", " << d << "] " << min(c,d) << std::endl;
	std::cout << "STR Min [" << y << ", " << z << "] " << min(y,z) << std::endl;

	std::cout << "INT Max [" << a << ", " << b << "] " << max(a,b) << std::endl;
	std::cout << "CHAR Max [" << c << ", " << d << "] " << max(c,d) << std::endl;
	std::cout << "STR Max [" << y << ", " << z << "] " << max(y,z) << std::endl;

	std::cout << "A: " << a << " B: " << b << std::endl;
	swap(a, b);
	std::cout << "A: " << a << " B: " << b << std::endl;

	std::cout << "C: " << c << " D: " << d << std::endl;
	swap(c, d);
	std::cout << "C: " << c << " D: " << d << std::endl;

	std::cout << "Y: " << y << " Z: " << z << std::endl;
	swap(y, z);
	std::cout << "Y: " << y << " Z: " << z << std::endl;

	return (0);
}
