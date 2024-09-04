/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:41:38 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/04 16:47:47 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 1 && argv)
		return (std::cout << "No args required!" << std::endl, 1);
	std::cout << "[DEBUG]:" << std::endl;
	harl.complain("debug");
	std::cout << "[INFO]:" << std::endl;
	harl.complain("info");
	std::cout << "[WARNING]:" << std::endl;
	harl.complain("warning");
	std::cout << "[ERROR]:" << std::endl;
	harl.complain("error");
	std::cout << "[OTHER]:" << std::endl;
	harl.complain("hola bon dia");
	return (0);
}
