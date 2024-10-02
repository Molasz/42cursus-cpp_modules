/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:21:34 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/02 12:23:05 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void)
{
	std::string	forms[3] = {"PresidentialPardon", "RobotomyRequest", "ShruberryCreation"};
	Intern	internA, internB, internC;
	AForm	*formA, *formB, *formC;
	Bureaucrat	bureaucrat("Bure", 1);

	formA = internA.makeForm(forms[0], "Presi");
	formB = internB.makeForm(forms[1], "Bender");
	formC = internC.makeForm(forms[2], "Tree");

	bureaucrat.signForm(*formA);
	bureaucrat.signForm(*formB);
	bureaucrat.signForm(*formC);

	bureaucrat.executeForm(*formA);
	bureaucrat.executeForm(*formB);
	bureaucrat.executeForm(*formC);

	if (formA)
		delete formA;
	if (formB)
		delete formB;
	if (formC)
		delete formC;
	return (0);
}
