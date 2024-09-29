/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:29:23 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/29 14:05:49 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):
	_name(copy._name), _grade(copy._grade)
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

const std::string	Bureaucrat::getName(void) const
{
	return _name;
}

int	Bureaucrat::getGrade(void) const
{
	return _grade;
}

void	Bureaucrat::incrementGrade(void)
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low!");
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high!");
}

std::ostream	&operator<<(std::ostream &s, const Bureaucrat &bureaucrat)
{
	s << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (s);
}
