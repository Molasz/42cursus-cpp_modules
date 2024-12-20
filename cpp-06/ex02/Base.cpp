/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:38:38 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/16 19:07:00 by molasz-a         ###   ########.fr       */
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
	std::string	str;

	if (!base)
		str = "NULL";
	else if (dynamic_cast<A*>(base))
		str = "A";
	else if (dynamic_cast<B*>(base))
		str = "B";
	else if (dynamic_cast<C*>(base))
		str = "C";
	std::cout << "[* " << str << "]";
}

void	identify(Base &base)
{
	std::string	str;
	Base	save;

	try {
		save = dynamic_cast<A&>(base);
		str = "A";
	} catch (std::exception &err)
	{
		try {
			save = dynamic_cast<B&>(base);
			str = "B";
		} catch (std::exception &err)
		{
			try {
				save = dynamic_cast<C&>(base);
				str = "C";
			} catch (std::exception &err)
			{
				str = "OTHER";
			}
		}
	}
	std::cout << "[& " << str << "]";
}
