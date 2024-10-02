/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:05:00 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/29 18:04:29 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):
	AForm("RobotomyRequest", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	AForm("RobotomyRequest", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form):
	AForm("RobotomyRequest", 72, 45), _target(form._target)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
{
	_target = form._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	static int	i = 0;

	if (!getSigned())
		throw FormNoSignedException();
	if (bureaucrat.getGrade() > getGExec())
		throw GradeTooLowException();

	std::cout << "brrrrrrrrrrrrrr..." << std::endl;
	if (i % 2 == 0)
		std::cout << bureaucrat.getName() << " has been robotomized";
	else
		std::cout << "robotomy fail :(";
	std::cout << std::endl;
	i++;
}
