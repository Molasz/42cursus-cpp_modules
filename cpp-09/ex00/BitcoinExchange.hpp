/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:27 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/20 19:21:22 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ctime>
#include <sstream>
#include <fstream>
#include <map>
#include <cstring>

class BitcoinExchange {
  private:
    std::map<std::time_t, double> btcValues;
    void  readDb(const char *dbFile);
    void  readDbLine(const std::string &line);
    void  readInputLine(const std::string &line);
    bool  validateDigits(const std::string &str);
    bool  validateFloatDigits(const std::string &str);
    bool  validateDate(const std::string &date);
    double  stof(const std::string &str);
    double  getBtcValue(const std::string &date);
    std::time_t getDate(const std::string &date);
  public:
    BitcoinExchange();
    BitcoinExchange(const char *dbFile);
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &ref);
    BitcoinExchange &operator=(const BitcoinExchange &ref);
    void  readInputFile(char *file);
};

class dateException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Incorrect date format!";
  }
};

class valueException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Incorrect value format!";
  }
};

class maxValueException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Max value exceded!";
  }
};

class noDbValueException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Not found a previous date on db!";
  }
};

class dbFileException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Error on db file!";
  }
};

class inputFileException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Error on input file!";
  }
};


