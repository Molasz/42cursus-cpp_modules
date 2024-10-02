/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:45:57 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/29 17:47:46 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARSONFORM_HPP
 #define PRESIDENTIALPARSONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string name);
		PresidentialPardonForm(const PresidentialPardonForm &form);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &form);
		~PresidentialPardonForm(void);
		void	execute(const Bureaucrat &bureaucrat) const;
};

#endif
