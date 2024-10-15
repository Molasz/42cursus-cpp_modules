/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:51:00 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/15 11:33:08 by molasz-a         ###   ########.fr       */
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
	private:
		Serializer();
		Serializer(const Serializer &ref);
		Serializer	&operator=(const Serializer &ref);
	public:
		~Serializer();
		static uintptr_t serialize(data_t *ptr);
		static data_t* deserialize(uintptr_t raw);
};
