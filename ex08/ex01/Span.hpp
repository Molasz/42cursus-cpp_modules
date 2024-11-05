/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:53:42 by molasz-a          #+#    #+#             */
/*   Updated: 2024/11/05 13:01:21 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int> _nums;
		const unsigned int _size;
	public:
		Span(void);
		Span(unsigned int size);
		Span(const Span &ref);
		Span &operator=(const Span &ref);
		~Span();
		void	addNumber(int n);
		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);

		class maxSizeException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
