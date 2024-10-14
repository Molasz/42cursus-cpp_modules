/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:38:38 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/14 14:17:43 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

Base	*generate(void)
{
	int	n = std::rand() % 3;
	Base *base;

	switch (n)
	{
		case 0:
			base = new A();
			break;
		case 1:
			base = new B();
			break;
		case 2:
			base = new C();
			break;
	}
	return base;
}

void	identify(Base *base)
{
	char	c;

	if (dynamic_cast<A*>(base))
		c = 'A';
	if (dynamic_cast<B*>(base))
		c = 'B';
	if (dynamic_cast<C*>(base))
		c = 'C';
	std::cout << "[* " << c << "]";
}

void	identify(Base &base)
{
	Base	save;
	char	c;

	try {
		save = dynamic_cast<A&>(base);
		c = 'A';
	} catch (std::exception &err)
	{
		try {
			save = dynamic_cast<B&>(base);
			c = 'B';
		} catch (std::exception &err)
		{
			try {
				save = dynamic_cast<C&>(base);
				c = 'C';
			} catch (std::exception &err)
			{
			}
		}
	}
	std::cout << "[& " << c << "]";
}
