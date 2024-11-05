/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:27 by molasz-a          #+#    #+#             */
/*   Updated: 2024/11/05 12:13:15 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>
#include <list>

class notFoundException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Not found";
  }
};

template <typename T>
int	easyfind(T c, int n)
{
	for (typename T::iterator i = c.begin(); i != c.end(); i++)
	{
		if (*i == n)
			return (n);
	}
	throw notFoundException();
}
