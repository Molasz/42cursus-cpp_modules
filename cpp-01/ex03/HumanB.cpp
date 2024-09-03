/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:11:47 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/03 12:47:09 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attack with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	_weapon = weapon;
}
