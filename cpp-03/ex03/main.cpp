/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:58:33 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/14 14:41:51 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamond("DIAMOND");

	diamond.attack("MARTI");
	diamond.guardGate();
	diamond.highFiveGuys();
	diamond.whoAmI();
	return (0);
}
