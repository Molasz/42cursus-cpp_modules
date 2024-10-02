/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:05:04 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/29 17:57:37 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
	AForm("PresidentialPardon", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	AForm("PresidentialPardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form):
	AForm("PresidentialPardon", 25, 5), _target(form._target)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
	_target = form._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void	PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	if (!getSigned())
		throw FormNoSignedException();
	if (bureaucrat.getGrade() > getGExec())
		throw GradeTooLowException();

	std::cout << bureaucrat.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
