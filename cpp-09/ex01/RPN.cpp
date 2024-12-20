/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:52:18 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/20 20:50:16 by molasz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{}

RPN::~RPN()
{}

RPN::RPN(const RPN &ref)
{
	*this = ref;
}

RPN	&RPN::operator=(const RPN &ref)
{
	_stack = ref._stack;
	return (*this);
}

void	RPN::rpn(char *args)
{
	bool	space = true;

	for (int i = 0; args[i]; i++)
	{
		if (args[i] == ' ')
			space = true;
		else if (std::isdigit(args[i]))
		{
			if (space)
				_stack.push(args[i] - '0');
			else
				throw argsException();
			space = false;
		}
		else if (args[i] == '*' || args[i] == '/' || args[i] == '+' || args[i] == '-')
		{
			if (space)
				_calc(args[i]);
			else
				throw argsException();
			space = false;
		}
	}
	if (_stack.size() == 1)
		std::cout << _stack.top();
	else
		throw argsException();
}

void	RPN::_calc(char c)
{
	int	a, b, r;

	if (_stack.size() < 2)
		throw argsException();
	b = _stack.top();
	_stack.pop();
	a = _stack.top();
	_stack.pop();

	if (c == '+')
		r = a + b;
	else if (c == '-')
		r = a - b;
	else if (c == '*')
		r = a * b;
	else
	{
		if (!b)
			throw zeroDivisionException();
		r = a / b;
	}
	_stack.push(r);
}
