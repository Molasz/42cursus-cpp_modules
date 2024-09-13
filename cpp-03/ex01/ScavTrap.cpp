/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:21:20 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/13 20:43:39 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(), _guard(false)
{
	_hp = 100;
	_ep = 50;
	_ap = 20;
	std::cout << "ScavTrap created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _guard(false)
{
	_hp = 100;
	_ep = 50;
	_ap = 20;
	std::cout << "ScavTrap " << _name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy), _guard(false)
{
	*this = copy;
	std::cout << "ScavTrap " << _name << " copy created!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	_name = copy._name;
	_hp = copy._hp;
	_ep = copy._ep;
	_ap = copy._ap;
	_guard = copy._guard;
	std::cout << "ScavTrap " << _name << " copy assigned!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_ep > 0 && _hp > 0 && !_guard)
	{
		_ep--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
			<< _ap << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " can't attack!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	_guard = !_guard;
	if (_guard)
		std::cout << "ScavTrap " << _name << "is in guard mode" << std::endl;
	else
		std::cout << "ScavTrap " << _name << "leave guard mode" << std::endl;
}
