/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:51:04 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/14 13:21:49 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &ref)
{
	*this = ref;
}

Serializer &Serializer::operator=(const Serializer &ref)
{
	(void) ref;
	return (*this);
}

Serializer::~Serializer()
{
}

uintptr_t	Serializer::serialize(data_t *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

data_t	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<data_t *>(raw));
}
