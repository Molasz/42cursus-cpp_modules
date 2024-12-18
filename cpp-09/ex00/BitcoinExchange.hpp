/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:27 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/18 19:17:32 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <map>
#include <cstring>

class BitcoinExchange {
  private:
    std::map<std::string, float> btcValues;
    void  readDb(const char *dbFile);
    void  readDbLine(const std::string &line);
    void  readInputLine(const std::string &line);
    bool  validateDigits(const std::string &str);
    bool  validateFloatDigits(const std::string &str);
    bool  validateDate(const std::string &date);
    float stof(const std::string &str);
  public:
    BitcoinExchange();
    BitcoinExchange(const char *dbFile);
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &ref);
    BitcoinExchange &operator=(const BitcoinExchange &ref);
    void  readInputFile(char *file);
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


