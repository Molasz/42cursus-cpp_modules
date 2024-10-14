/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:36:17 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/14 14:10:48 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
	

class Base
{
	public:
		virtual ~Base();
};

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);
