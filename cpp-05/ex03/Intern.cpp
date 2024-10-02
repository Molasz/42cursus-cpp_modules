/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:49:11 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/02 12:16:36 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
}

Intern	&Intern::operator=(const Intern &copy)
{
	(void) copy;
	return (*this);
}

Intern::~Intern()
{
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string	forms[3] = {"PresidentialPardon", "RobotomyRequest", "ShruberryCreation"};
	int	i = 0;
	AForm	*form;
	
	while (i < 3)
	{
		if (name == forms[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			form = new PresidentialPardonForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new ShrubberyCreationForm(target);
			break;
		default:
			form = NULL;
	}
	if (form)
		std::cout << "Intern creates " << form->getName() << std::endl;
	else
		std::cout << "Intern can't create " << name << " form" << std::endl;
	return (form);
}
