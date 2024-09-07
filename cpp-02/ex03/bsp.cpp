/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 20:11:48 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/07 10:21:29 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float area (Point a, Point b, Point c)
{
	return ((a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	a1, a2, a3;

	a1 = area(point, a, b);
	a2 = area(point, b, c);
	a3 = area(point, c, a);

	return (!(a1 <= 0 || a2 <= 0 || a3 <= 0)
			&& (a1 >= 0 || a2 >= 0 || a3 >= 0));
}


