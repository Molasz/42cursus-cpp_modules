/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:56:55 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/14 13:59:56 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	_hp = 100;
	_ep = 100;
	_ap = 30;
	std::cout << "FragTrap created!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name), _guard(false)
{
	_hp = 100;
	_ep = 100;
	_ap = 30;
	std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy), _guard(false)
{
	*this = copy;
	std::cout << "FragTrap " << _name << " copy created!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	_name = copy._name;
	_hp = copy._hp;
	_ep = copy._ep;
	_ap = copy._ap;
	_guard = copy._guard;
	std::cout << "FragTrap " << _name << " copy assigned!" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " destroyed!" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << _name << " high five!" << std::endl;
}
