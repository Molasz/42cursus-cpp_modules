/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:27 by molasz-a          #+#    #+#             */
/*   Updated: 2024/12/18 12:12:13 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange {
  private:
    std::map<std::string, float> btcValues;
    void  readDb(const std::string &dbFile);
    bool  validateDbFirstLine(const std::string &line);
    bool  validateDbLine(const std::string &line);
  public:
    BitcoinExchange();
    BitcoinExchange(const std::string &dbFile);
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &ref);
    BitcoinExchange &operator=(const BitcoinExchange &ref);
    void  calcBtc(char *file);
};

class dbFileException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Error on db file!";
  }
};

class badDateException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Incorrect date [yyyy-mm-dd]";
  }
};

class badValueException: public std::exception
{
  virtual const char* what() const throw()
  {
    return "Incorrect value [0-1000]";
  }
};
