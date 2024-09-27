/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:49:40 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/27 19:19:43 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain(void);
		Brain(const Brain &copy);
		Brain	&operator=(const Brain &copy);
		~Brain();
		std::string	*getIdeas(void);
		void		setIdea(std::string idea, int i);
};

#endif
