/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:01:17 by molasz-a          #+#    #+#             */
/*   Updated: 2024/11/14 12:19:47 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef std::stack<T> stack;
		typedef typename stack::container_type container;
		typedef typename container::iterator iterator;

		MutantStack() : stack()
		{}

		MutantStack(const stack &ref): stack(ref)
		{}

		~MutantStack()
		{}

		stack	&operator=(const stack &ref)
		{
			if (*this != ref)
				*this = ref;
			return (*this);
		}

		iterator	begin()
		{
			return (stack::c.begin());
		}

		iterator	end()
		{
			return (stack::c.end());
		}
};
