/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:18:09 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/29 14:05:15 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
 #define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gSign;
		const int			_gExec;
	public:
		Form(void);
		Form(const std::string name, int gSign, int gExec);
		Form(const Form &copy);
		Form	&operator=(const Form &copy);
		~Form(void);

		const std::string	getName(void) const;
		bool			getSigned(void) const;
		int			getGSign(void) const;
		int			getGExec(void) const;
		void				beSigned(const Bureaucrat &bureaucrat);

		class GradeTooLowException: public std::exception
		{
			virtual const char *what() const throw();
		};

		class GradeTooHighException: public std::exception
		{
			virtual const char *what() const throw();
		};

		class FormAlreadySignedException: public std::exception
		{
			virtual const char *what() const throw();
		};
};

std::ostream	 &operator<<(std::ostream &s, const Form &form);

#endif
