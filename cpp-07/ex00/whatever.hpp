/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:38:51 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/15 17:59:15 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void	swap(T &x, T &y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

template <typename T> T	min(T &x, T &y)
{
	if (x > y)
		return y;
	return x;
}

template <typename T> T	max(T &x, T &y)
{
	if (x > y)
		return x;
	return y;
}
