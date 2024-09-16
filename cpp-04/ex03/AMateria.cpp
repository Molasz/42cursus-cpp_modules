/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:37:17 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 20:49:34 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type)
{
}

AMateria::AMateria(const AMateria &copy): _type(copy._type)
{
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	_type = copy._type;
	return (*this);
}

AMateria::~AMateria(void)
{
}

std::string	const &AMateria::getType(void) const
{
	return _type;
}
