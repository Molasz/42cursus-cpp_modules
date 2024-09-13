/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:41:32 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/13 19:39:23 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _hp(10), _ep(10), _ap(0)
{
	std::cout << "ClapTrap created!" << std::endl;
}

ClapTrap::ClapTrap(const std::string name): _hp(10), _ep(10), _ap(0)
{
	_name = name;
	std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap " << _name << " copy created!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &copy)
{
	_name = copy._name;
	_hp = copy._hp;
	_ep = copy._ep;
	_ap = copy._ap;
	std::cout << "ClapTrap " << _name << " copy assigned!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_ep > 0 && _hp > 0)
	{
		_ep--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
			<< _ap << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " can't attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int damage)
{
	if (_hp > 0)
	{
		_hp -= damage;
		std::cout << "ClapTrap " << _name << " takes " << damage << " points of damage!" << std::endl;
		if (_hp < 0)
			std::cout << "ClapTrap " << _name << " died" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is death" << std::endl;
}


void	ClapTrap::beRepaired(unsigned int health)
{
	if (_ep > 0 && _hp > 0)
	{
		_ep--;
		_hp += health;
		std::cout << "ClapTrap " << _name << " takes " << health << " points of health!" << std::endl;
	}
}


