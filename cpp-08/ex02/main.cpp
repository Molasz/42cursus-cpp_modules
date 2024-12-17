/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:58:02 by molasz-a          #+#    #+#             */
/*   Updated: 2024/11/14 12:26:56 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> istack;

	istack.push(5);
	istack.push(17);
	std::cout << "INT STACK TOP: " <<istack.top() << std::endl;
	istack.pop();
	std::cout << "INT STACK SIZE: " << istack.size() << std::endl;
	istack.push(3);
	istack.push(5);
	istack.push(737);
	istack.push(0);

	MutantStack<int>::iterator it = istack.begin();
	MutantStack<int>::iterator ite = istack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<std::string> strstack;
	strstack.push("Hello");
	strstack.push(" ");
	strstack.push("world");
	strstack.push("!");
	for(MutantStack<std::string>::iterator i = strstack.begin(); i != strstack.end(); i++)
	{
		std::cout << *i;
	}
	std::cout << std::endl;

	return (0);
}
