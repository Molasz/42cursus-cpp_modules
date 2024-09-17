/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:16:49 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/17 20:26:24 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_slots[4];	
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		MateriaSource	&operator=(const MateriaSource &copy);
		~MateriaSource(void);
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const &type);
};

#endif

