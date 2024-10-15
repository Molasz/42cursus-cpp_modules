/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:12:19 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/15 11:33:23 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	//Serializer	serial;
	data_t		data;
	data_t		*copy;
	uintptr_t	ptr;

	data.str = "Hello world";
	data.n = 42;

	ptr = Serializer::serialize(&data);
	copy = Serializer::deserialize(ptr);

	std::cout << "Original [data_t *]: " << &data << std::endl
		<< "Serialize [uintptr_t]: " << ptr << std::endl
		<< "Deserialize [data_t *]: " << copy << std::endl
		<< "STR: " << copy->str << std::endl
		<< "N: " << copy->n << std::endl;
	return (0);
}
