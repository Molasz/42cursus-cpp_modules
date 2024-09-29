/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:21:34 by molasz-a          #+#    #+#             */
/*   Updated: 2024/09/29 14:10:17 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	*bureaucrat;
	Form		*form;

	try
	{
		form = new Form("Contract", 200, 50);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		form = new Form("Contract", 0, 50);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		form = new Form("Contract", 20, 500);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		form = new Form("Contract", 20, -50);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		form = new Form("Contract", 1, 1);
		bureaucrat = new Bureaucrat("Marti", 3);
		bureaucrat->signForm(*form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	if (form)
		delete form;

	try
	{
		form = new Form("Contract", 5, 5);
		bureaucrat->signForm(*form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	if (bureaucrat)
		delete bureaucrat;
	if (form)
		delete form;
	return (0);
}
