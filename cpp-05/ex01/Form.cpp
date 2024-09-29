/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:18:02 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/29 14:05:33 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _signed(false), _gSign(1), _gExec(1)
{
}

Form::Form(const std::string name, int gSign, int gExec):
	_name(name), _signed(false), _gSign(gSign), _gExec(gExec)
{
	if (gSign < 1 || gExec < 1)
		throw GradeTooHighException();
	if (gSign > 150 || gExec > 150)
		throw GradeTooHighException();
}

Form::Form(const Form &copy):
	_name(copy._name), _signed(copy._signed), _gSign(copy._gSign), _gExec(copy._gExec)
{
}

Form	&Form::operator=(const Form &copy)
{
	_signed = copy._signed;
	return (*this);
}

Form::~Form()
{
}

const std::string	Form::getName(void) const
{
	return (_name);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

int	Form::getGSign(void) const
{
	return (_gSign);
}

int	Form::getGExec(void) const
{
	return (_gExec);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (_signed)
		throw FormAlreadySignedException();
	else if (_gSign >= bureaucrat.getGrade() && !_signed)
		_signed = true;
	else
		throw GradeTooLowException();
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low!");
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high!");
}

const char	*Form::FormAlreadySignedException::what(void) const throw()
{
	return ("Form already signed!");
}

std::ostream	&operator<<(std::ostream &s, const Form &form)
{
	s << form.getName() << ", form signed " << form.getSigned() << std::endl;
	s << "Sign grade " << form.getGSign() << " Execute grade " << form.getGExec() << std::endl;
	return (s);
}
