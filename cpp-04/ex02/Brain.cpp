/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:52:17 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/16 18:08:20 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Idea";
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	std::cout << "Brain created" << std::endl;
}

Brain	&Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	std::cout << "Brain created" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed" << std::endl;
}

std::string	*Brain::getIdeas(void)
{
	return _ideas;
}
