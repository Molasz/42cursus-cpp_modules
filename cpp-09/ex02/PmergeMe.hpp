/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:27 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/21 13:23:43 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <utility>
#include <sstream>
#include <ctime>

class PmergeMe
{
  private:
    std::deque<unsigned int>   _dq;
    std::vector<unsigned int>  _vec;
    bool            _validateInput(char **args);
    unsigned long   _stoui(const std::string &str);
    void  _printVector(std::vector<unsigned int> vec, const std::string &str);
    void  _sortVector(std::vector<unsigned int> vec);
    void  _sortDeque();
  public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &ref);
    PmergeMe &operator=(const PmergeMe &ref);
    void  sort(char **args);
};

class inputException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Incorrect input values";
  }
};

class sortException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Can't sort the numbers";
  }
};

