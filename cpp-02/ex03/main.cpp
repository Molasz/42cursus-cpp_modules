/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:35:14 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/07 10:22:11 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void	check_points(Point point, Point a, Point b, Point c)
{
	if (bsp(a, b, c, point))
		std::cout << "INSIDE" << std::endl;
	else
		std::cout << "OUTSIDE" << std::endl;
}

int	main(void)
{
	Point	pointA(2, 2), pointB(5,3);
	Point	a(0,0), b(5,0), c(0,5);

	check_points(pointA, a, b, c);
	check_points(pointB, a, b, c);
	check_points(a, a, b, c);
	check_points(b, a, b, c);
	check_points(c, a, b, c);
}
