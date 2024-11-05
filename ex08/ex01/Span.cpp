/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:53:45 by molasz-a          #+#    #+#             */
/*   Updated: 2024/11/05 13:06:54 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _size(0)
{}

Span::Span(unsigned int size): _size(size)
{}

Span::Span(const Span &ref): _size(ref._size)
{}

Span	&Span::operator=(const Span &ref)
{
	_nums.erase(_nums.begin(), _nums.end());
	for (std::vector<int>::const_iterator i = ref._nums.begin(); i != ref._nums.end(); i++)
	{
		_nums.push_back(*i);
	}
	return (*this);
}

Span::~Span()
{}

void	Span::addNumber(int n)
{
	if (_nums.size() < _size)
		_nums.push_back(n);
	else
		throw maxSizeException();
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator i = begin; i != end; i++)
	{
		try {
			addNumber(*i);
		} catch (std::exception &err)
		{
			std::cout << err.what() << std::endl;
			return;
		}
	}
}

int	Span::shortestSpan(void)
{
	unsigned int	min;
	
	std::sort(_nums.begin(), _nums.end());
	min = *(_nums.end() - 1);

	for(std::vector<int>::iterator i = _nums.begin(); i + 1 != _nums.end(); i++)
	{
		if (*(i + 1) - *i < (int)min)
			min = *(i + 1) - *i;
	}
	return (min);
}

int	Span::longestSpan(void)
{
	std::sort(_nums.begin(), _nums.end());
	return (*(_nums.end() - 1) - *_nums.begin());
}

const char *Span::maxSizeException::what(void) const throw()
{
	return "Span max size reached";
}
