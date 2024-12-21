/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:52:18 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/21 13:24:38 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{}

PmergeMe::~PmergeMe()
{}

PmergeMe::PmergeMe(const PmergeMe &ref)
{
	*this = ref;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &ref)
{
	_dq = ref._dq;
	_vec = ref._vec;
	return (*this);
}

void	PmergeMe::sort(char **args)
{
	int	startTime, size;
	double vecTime, dqTime;

	if (!_validateInput(args))
		throw inputException();
	size = _vec.size();
	_printVector(_vec, "Before");
	startTime = std::clock();
	_sortVector(_vec);
	vecTime = (double)(std::clock() - startTime) / CLOCKS_PER_SEC;
	startTime = std::clock();	
	_sortDeque();
	dqTime = (double)(std::clock() - startTime) / CLOCKS_PER_SEC;
	_printVector(_vec, "After");
	std::cout << "Time to process a range of " << size << " elements with vector: " << vecTime << "s" << std::endl; 
	std::cout << "Time to process a range of " << size << " elements with deque: " << dqTime << "s" << std::endl; 
}

bool	PmergeMe::_validateInput(char **args)
{
	unsigned long	n;

	for (int i = 0; args[i]; i++)
	{
		for(int j = 0; args[i][j]; j++)
		{
			if (!std::isdigit(args[i][j]))
				return (false);
		}
		n = _stoui(args[i]);
		if (n > 4294967295)
			return (false);
		_dq.push_back(n);
		_vec.push_back(n);
	}
	return (true);
}

unsigned long	PmergeMe::_stoui(const std::string &str)
{
	std::stringstream	ss;
	unsigned long	n;

	ss << str;
	ss >> n;
	return (n);
}

void	PmergeMe::_printVector(std::vector<unsigned int> vec, const std::string &str)
{
	std::cout << str << ": ";
	for (std::vector<unsigned int>::iterator i = vec.begin(); i != vec.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::_sortVector(std::vector<unsigned int> vec)
{
	std::vector< std::pair <unsigned int, unsigned int> >	pairs;
	std::vector<unsigned int> lVec, sVec;

	if (vec.size() < 2)
		return;
	for (std::vector<unsigned int>::iterator i = vec.begin(); i != vec.end() && i + 1 != vec.end(); i += 2)
		pairs.push_back(std::make_pair(*i, *(i + 1)));
	if (vec.size() != pairs.size() * 2)
		pairs.push_back(std::make_pair(*(vec.end() - 1), 0));
	for (std::vector< std::pair <unsigned int, unsigned int> >::iterator i = pairs.begin(); i != pairs.end(); i++)
	{
		if (_vec.size() % 2 && i + 1 == pairs.end())
		{
			lVec.push_back(i->first);
			break;
		}
		if (i->first > i->second)
		{
			lVec.push_back(i->first);
			sVec.push_back(i->second);
		}
		else
		{
			lVec.push_back(i->second);
			sVec.push_back(i->first);
		}
	}
	_sortVector(lVec);
	_sortVector(sVec);
	_printVector(lVec, "Large");
	_printVector(sVec, "Small");
	
}

void	PmergeMe::_sortDeque()
{}

