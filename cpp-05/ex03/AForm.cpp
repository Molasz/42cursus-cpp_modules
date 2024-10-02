/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:18:02 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/29 17:19:06 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): _signed(false), _gSign(1), _gExec(1)
{
}

AForm::AForm(const std::string name, int gSign, int gExec):
	_name(name), _signed(false), _gSign(gSign), _gExec(gExec)
{
	if (gSign < 1 || gExec < 1)
		throw GradeTooHighException();
	if (gSign > 150 || gExec > 150)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &copy):
	_name(copy._name), _signed(copy._signed), _gSign(copy._gSign), _gExec(copy._gExec)
{
}

AForm	&AForm::operator=(const AForm &copy)
{
	_signed = copy._signed;
	return (*this);
}

AForm::~AForm()
{
}

const std::string	AForm::getName(void) const
{
	return (_name);
}

bool	AForm::getSigned(void) const
{
	return (_signed);
}

int	AForm::getGSign(void) const
{
	return (_gSign);
}

int	AForm::getGExec(void) const
{
	return (_gExec);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (_signed)
		throw FormAlreadySignedException();
	else if (_gSign >= bureaucrat.getGrade() && !_signed)
		_signed = true;
	else
		throw GradeTooLowException();
}

const char	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low!");
}

const char	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high!");
}

const char	*AForm::FormAlreadySignedException::what(void) const throw()
{
	return ("Form already signed!");
}

const char	*AForm::FormNoSignedException::what(void) const throw()
{
	return ("Form isn't signed!");
}

std::ostream	&operator<<(std::ostream &s, const AForm &form)
{
	s << form.getName() << ", form signed " << form.getSigned() << std::endl;
	s << "Sign grade " << form.getGSign() << " Execute grade " << form.getGExec() << std::endl;
	return (s);
}
