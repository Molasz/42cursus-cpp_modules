/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:04:06 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/15 18:22:16 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T_arr, typename T_func>
void	iter(T_arr &arr, size_t len, T_func func)
{
	std::cout << len << std::endl;
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}
