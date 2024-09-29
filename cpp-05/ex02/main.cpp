/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:21:34 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/29 18:09:56 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	ShrubberyCreationForm	shrubb("shrubb");
	RobotomyRequestForm		roboto("roboto");
	PresidentialPardonForm	president("president");
	
	Bureaucrat	bureaucrat("bureaucrat", 5);
	Bureaucrat	marti("Marti", 145);

	bureaucrat.executeForm(shrubb);

	std::cout << std::endl;

	marti.signForm(shrubb);
	marti.signForm(roboto);
	marti.signForm(president);

	std::cout << std::endl;

	bureaucrat.signForm(shrubb);
	bureaucrat.signForm(roboto);
	bureaucrat.signForm(president);

	std::cout << std::endl;

	marti.executeForm(shrubb);
	marti.executeForm(roboto);
	marti.executeForm(president);

	std::cout << std::endl;

	bureaucrat.executeForm(shrubb);
	bureaucrat.executeForm(roboto);
	bureaucrat.executeForm(roboto);
	bureaucrat.executeForm(president);

	return (0);
}
