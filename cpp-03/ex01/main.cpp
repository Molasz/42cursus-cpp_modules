/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:58:33 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/14 13:52:28 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav("SCAV");

	scav.attack("CLAP");
	scav.guardGate();
	scav.attack("NONE");
	scav.guardGate();
	scav.attack("TRAP");
	return (0);
}
