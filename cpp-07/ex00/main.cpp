/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:38:10 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/17 19:46:40 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

struct t_data
{
	int			n;
	std::string	str;
};

int	main(void)
{
	int			a = 5, b = 42;
	char		c = 'c', d = 'd';
	std::string	e = "HOLA", f = "MUNDO";
	t_data		g,h;

	g.n = 42;
	h.n = 24;
	g.str = "HOLA";
	h.str = "MUNDO";


	std::cout << "INT Min [" << a << ", " << b << "] " << min(a,b) << std::endl;
	std::cout << "CHAR Min [" << c << ", " << d << "] " << min(c,d) << std::endl;
	std::cout << "STR Min [" << e << ", " << f << "] " << min(e,f) << std::endl;

	std::cout << "INT Max [" << a << ", " << b << "] " << max(a,b) << std::endl;
	std::cout << "CHAR Max [" << c << ", " << d << "] " << max(c,d) << std::endl;
	std::cout << "STR Max [" << e << ", " << f << "] " << max(e,f) << std::endl;

	std::cout << "A: " << a << " B: " << b << std::endl;
	swap(a, b);
	std::cout << "A: " << a << " B: " << b << std::endl;

	std::cout << "C: " << c << " D: " << d << std::endl;
	swap(c, d);
	std::cout << "C: " << c << " D: " << d << std::endl;

	std::cout << "E: " << e << " F: " << f << std::endl;
	swap(e, f);
	std::cout << "E: " << e << " F: " << f << std::endl;


	std::cout << "G: n:" << g.n << " str:" << g.str << " F: n:" << h.n << " str:" << h.str << std::endl;
	swap(g, h);
	std::cout << "G: n:" << g.n << " str:" << g.str << " F: n:" << h.n << " str:" << h.str << std::endl;

	return (0);
}
