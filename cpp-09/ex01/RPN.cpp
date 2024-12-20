/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:52:18 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/20 20:18:06 by molasz-a         ###   ########.fr       */
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
	_parseArgs(args);
	_calc();
}

void	RPN::_parseArgs(char *args)
{
	bool	space = true;

	for (int i = 0; args[i]; i++)
	{
		if (args[i] == ' ')
			space = true;
		else if (std::isdigit(args[i]) || args[i] == '*' || args[i] == '/' || args[i] == '+' || args[i] == '-')
		{
			if (space)
				_stack.push(args[i]);
			else
				throw argsException();
			space = false;
		}
	}
}

void	RPN::_calc()
{
	char	actual;

	while (true)
	{
		actual = _stack.top();
		if (args[i] == '*' || args[i] == '/' || args[i] == '+' || args[i] == '-')

	}
	
}
