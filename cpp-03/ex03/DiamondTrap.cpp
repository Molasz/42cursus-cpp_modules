/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:11:12 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/14 14:32:11 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	ClapTrap::_name = "_clap_name";
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_ap = FragTrap::_ap;
	std::cout << "DiamondTrap created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	_name = name;
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_ap = FragTrap::_ap;
	std::cout << "DiamondTrap " << _name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "DiamondTrap " << _name << " copy created!" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &copy)
{
	_name = copy._name;
	ClapTrap::_name = copy._name + "_clap_name";
	_hp = copy._hp;
	_ep = copy._ep;
	_ap = copy._ap;
	std::cout << "DiamondTrap " << _name << " copy assigned!" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " destroyed!" << std::endl;	
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap: " << _name << " | FragTrap: " << ClapTrap::_name << std::endl;
}
