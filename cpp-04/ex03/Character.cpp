/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:00:03 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/02 15:54:24 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
	_trash = NULL;
}

Character::Character(std::string name)
{
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
	_name = name;
	_trash = NULL;
}

Character::Character(const Character &copy)
{
	_name = copy._name;
	for (int i = 0; i < 4; i++)
		_slots[i] = copy._slots[i]->clone();
	_trash = copy._trash;
}

Character	&Character::operator=(const Character &copy)
{
	_name = copy._name;
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete _slots[i];
		if (copy._slots[i])
			_slots[i] = copy._slots[i]->clone();
		else
			_slots[i] = NULL;
	}
	_trash = copy._trash->clone();
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
		{
			delete _slots[i];
		}
	}
	if (_trash)
		delete _trash;
}

const std::string &Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_slots[i])
		{
			_slots[i] = m;
			return ;
		}
	}
	delete m;
}

void	Character::unequip(int i)
{
	if (i > 3 || i < 0 || !_slots[i])
		return ;
	if (_trash)
		delete _trash;
	_trash = _slots[i];
	_slots[i] = NULL;
}

void	Character::use(int i, ICharacter &target)
{
	if (!_slots[i])
		return ;
	_slots[i]->use(target);
}
