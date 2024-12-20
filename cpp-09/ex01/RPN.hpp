/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:27 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/20 20:13:05 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

class RPN
{
  private:
    std::stack<char>  _stack;
    void              _parseArgs(char *args);
    void              _calc();
  public:
    RPN();
    ~RPN();
    RPN(const RPN &ref);
    RPN &operator=(const RPN &ref);
    void  rpn(char *args);
};

class argsException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Incorrect given arguments";
  }
};


class zeroDivisionException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Can't divide by 0";
  }
};

