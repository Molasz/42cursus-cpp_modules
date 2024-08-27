/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:20:00 by molasz-a          #+#    #+#             */
/*   Updated: 2024/08/27 21:36:35 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie	*zombie;

	if (argc != 1 && argv)
		return (std::cout << "No args required!" << std::endl, 1);
	zombie = newZombie("Zombie 1");
	zombie->announce();
	randomChump("Zombie 2");
	zombie->announce();
	delete zombie;
	return (0);
}
