/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:58:02 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/21 18:32:05 by molasz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	RPN	calculator;
	if (argc == 2)
	{
		try
		{
			calculator.rpn(argv[1]);
		}
		catch (std::exception &err)
		{
			std::cout << err.what() << std::endl;
		}
	}
	else
		std::cout << "./RPN 'args'\n\tex: ./RPN 2 + 3 / 4 * 2" << std::endl;
	return (0);
}
