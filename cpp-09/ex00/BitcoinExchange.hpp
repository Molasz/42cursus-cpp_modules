/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:27 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/17 19:59:27 by molasz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <algorithm>
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
	typename T::iterator found = find(c.begin(), c.end(), n);
	if (found != c.end())
		return (*found);
	throw notFoundException();
}

