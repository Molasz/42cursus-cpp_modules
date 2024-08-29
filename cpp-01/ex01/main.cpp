/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:20:00 by molasz-a          #+#    #+#             */
/*   Updated: 2024/08/29 20:47:57 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	*horde;
	int		zombies;

	if (argc != 1 && argv)
		return (std::cout << "No args required!" << std::endl, 1);
	zombies = 3;
	std::cout << "Zombie horde size: " << zombies << std::endl;
	horde = zombieHorde(zombies, "Zombie");
	for (int i = 0; i < zombies; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
