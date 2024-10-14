/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:51:00 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/14 13:20:46 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

struct data_t
{
	std::string	str;
	int		n;
};

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer &ref);
		Serializer	&operator=(const Serializer &ref);
		~Serializer();
		static uintptr_t serialize(data_t *ptr);
		static data_t* deserialize(uintptr_t raw);
};
