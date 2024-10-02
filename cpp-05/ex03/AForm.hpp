/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:18:09 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/29 17:41:17 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
 #define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gSign;
		const int			_gExec;
	public:
		AForm(void);
		AForm(const std::string name, int gSign, int gExec);
		AForm(const AForm &copy);
		AForm	&operator=(const AForm &copy);
		virtual ~AForm(void);

		const std::string	getName(void) const;
		bool				getSigned(void) const;
		int					getGSign(void) const;
		int					getGExec(void) const;
		void		beSigned(const Bureaucrat &bureaucrat);
		virtual void execute(const Bureaucrat &bureaucrat) const = 0;

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

		class FormNoSignedException: public std::exception
		{
			virtual const char *what() const throw();
		};
};

std::ostream	 &operator<<(std::ostream &s, const AForm &form);

#endif
