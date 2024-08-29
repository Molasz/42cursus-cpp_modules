/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:23:35 by molasz-a          #+#    #+#             */
/*   Updated: 2024/08/27 22:24:57 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "Name";
	std::cout << name << ": created" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << ": created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	std::cout << this->name << ": Set name to " << name << std::endl;
	this->name = name;
}
