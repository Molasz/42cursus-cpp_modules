/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:59:49 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/17 20:50:20 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(const Ice &copy): AMateria("ice")
{
	(void) copy;
}

Ice	&Ice::operator=(const Ice &copy)
{
	(void) copy;
	_type = "ice";
	return (*this);
}

Ice::~Ice(void)
{
}

Ice	*Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
