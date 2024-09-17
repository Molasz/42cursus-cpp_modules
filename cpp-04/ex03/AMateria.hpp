/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:27:23 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/17 20:41:33 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &copy);
		virtual ~AMateria(void);
		std::string const & getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif
