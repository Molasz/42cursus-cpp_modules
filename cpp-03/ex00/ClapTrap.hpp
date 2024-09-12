/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:41:30 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/12 18:52:35 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap& operator=(const ClapTrap &copy);
		~ClapTrap();
		std::string	_name;
		int		_hp;
		int		_ep;
		int		_ap;
	public:
		void	attack(const std::string &target);
		void	takeDamage(unsigned int damage);
		void	beRepaired(unsigned int health);
};

#endif
