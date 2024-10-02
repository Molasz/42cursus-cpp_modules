/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:44:11 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/29 17:47:56 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
 #define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string name);
		RobotomyRequestForm(const RobotomyRequestForm &form);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &form);
		~RobotomyRequestForm(void);
		void	execute(const Bureaucrat &bureaucrat) const;
};

#endif
