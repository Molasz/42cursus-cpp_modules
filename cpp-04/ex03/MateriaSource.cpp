/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:21:33 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/18 11:45:25 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete _slots[i];
		_slots[i] = copy._slots[i]->clone();
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete _slots[i];
		_slots[i] = copy._slots[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete _slots[i];
	}
}

void	MateriaSource::learnMateria(AMateria *material)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_slots[i])
		{
			_slots[i] = material;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i]->getType() == type)
			return (_slots[i]->clone());
	}
	return (0);
}
