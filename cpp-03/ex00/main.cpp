/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:58:33 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/13 19:16:24 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap("CLAP");
	ClapTrap	trap("TRAP");

	clap.beRepaired(10);
	clap.attack("TRAP");
	trap.attack("CLAP");
	trap.attack("CLAP");
	trap.attack("CLAP");
	trap.attack("CLAP");
	trap.attack("CLAP");
	trap.attack("CLAP");
	trap.attack("CLAP");
	trap.attack("CLAP");
	trap.attack("CLAP");
	trap.attack("CLAP");
	trap.attack("CLAP");
	clap.takeDamage(50);
	clap.attack("MARTI");
	return (0);
}
