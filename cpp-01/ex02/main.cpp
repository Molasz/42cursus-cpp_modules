/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:55:49 by molasz-a          #+#    #+#             */
/*   Updated: 2024/08/29 21:05:10 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	if (argc != 1 && argv)
		return (std::cout << "No args required!" << std::endl, 1);
	std::cout << "String: " << &string << std::endl;
	std::cout << "StringPTR: " << stringPTR << std::endl;
	std::cout << "StringREF: " << &stringREF << std::endl;
	std::cout << "String: " << string << std::endl;
	std::cout << "StringPTR: " << *stringPTR << std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;
	return (0);
}
