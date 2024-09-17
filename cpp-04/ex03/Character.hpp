/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:54:13 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/17 21:16:35 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_slots[4];
		AMateria	*_trash;
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &copy);
		Character	&operator=(const Character &copy);
		~Character(void);
		std::string const &getName(void) const;
		void	equip(AMateria *m);
		void	unequip(int i);
		void	use(int i, ICharacter &target);
};

#endif
