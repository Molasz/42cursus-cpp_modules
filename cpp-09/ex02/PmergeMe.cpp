/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:52:18 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/21 18:16:55 by molasz           ###   ########.fr       */
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
	_deq = ref._deq;
	_vec = ref._vec;
	return (*this);
}

void	PmergeMe::sort(char **args)
{
	int	startTime, size;
	double vecTime, deqTime;

	if (!_validateInput(args))
		throw inputException();
	size = _vec.size();
	_printVector(_vec, "Before");
	startTime = std::clock();
	_sortVec(_vec, 0, _vec.size() - 1);
	vecTime = (double)(std::clock() - startTime);
	startTime = std::clock();	
	_sortDeq(_deq, 0, _deq.size() - 1);
	deqTime = (double)(std::clock() - startTime);
	_printVector(_vec, "After");
	std::cout << "Time to process a range of " << size << " elements with vector: " << vecTime << "µs" << std::endl; 
	std::cout << "Time to process a range of " << size << " elements with deque: " << deqTime << "µs" << std::endl; 
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
		_deq.push_back(n);
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

void	PmergeMe::_sortVec(std::vector<unsigned int> &vec, int left, int right)
{
	int	mid;

	if (left >= right)
        return;
    mid = left + (right - left) / 2;
    _sortVec(vec, left, mid);
    _sortVec(vec, mid + 1, right);
    _mergeVec(vec, left, mid, right);
}

void	PmergeMe::_mergeVec(std::vector<unsigned int> &vec, int left, int mid, int right)
{
	int i = 0, j = 0, k = left;
	int n1 = mid - left + 1;
    int n2 = right - mid;
	std::vector<unsigned int> vLeft(n1), vRight(n2);

	for (int a = 0; a < n1; a++)
        vLeft[a] = vec[left + a];
    for (int a = 0; a < n2; a++)
        vRight[a] = vec[mid + 1 + a];

    while (i < n1 && j < n2) {
        if (vLeft[i] <= vRight[j]) {
            vec[k] = vLeft[i];
            i++;
        }
        else {
            vec[k] = vRight[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = vLeft[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = vRight[j];
        j++;
        k++;
    }
}

void	PmergeMe::_sortDeq(std::deque<unsigned int> &deq, int left, int right)
{
	int	mid;

	if (left >= right)
        return;
    mid = left + (right - left) / 2;
    _sortDeq(deq, left, mid);
    _sortDeq(deq, mid + 1, right);
    _mergeDeq(deq, left, mid, right);
}

void	PmergeMe::_mergeDeq(std::deque<unsigned int> &deq, int left, int mid, int right)
{
	int i = 0, j = 0, k = left;
	int n1 = mid - left + 1;
    int n2 = right - mid;
	std::deque<unsigned int> dLeft(n1), dRight(n2);

	for (int a = 0; a < n1; a++)
        dLeft[a] = deq[left + a];
    for (int a = 0; a < n2; a++)
        dRight[a] = deq[mid + 1 + a];

    while (i < n1 && j < n2) {
        if (dLeft[i] <= dRight[j]) {
            deq[k] = dLeft[i];
            i++;
        }
        else {
            deq[k] = dRight[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        deq[k] = dLeft[i];
        i++;
        k++;
    }

    while (j < n2) {
        deq[k] = dRight[j];
        j++;
        k++;
    }
}
