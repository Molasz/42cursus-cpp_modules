/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:55:17 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/14 14:16:14 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
		bool	_guard;
	public:
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap& operator=(const FragTrap &copy);
		~FragTrap(void);
		void	highFiveGuys(void);
};

#endif

