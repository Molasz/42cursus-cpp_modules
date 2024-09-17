/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:49:57 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/17 20:50:26 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(const Cure &copy): AMateria("cure")
{
	(void) copy;
}

Cure	&Cure::operator=(const Cure &copy)
{
	(void) copy;
	_type = "cure";
	return (*this);
}

Cure::~Cure(void)
{
}

Cure	*Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
