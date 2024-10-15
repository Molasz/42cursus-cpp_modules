/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:45:50 by molasz-a          #+#    #+#             */
/*   Updated: 2024/10/15 19:05:38 by molasz-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
class Array
{
    private:
       T        *_items;
       size_t   _size;
    public:
       Array();
       Array(unsigned int n);
       Array(const Array &ref);
       Array &operator=(const Array &ref);
       ~Array();
       unsigned int size(void) const;
       T &operator[](unsigned int n);

       class OutOfBoundsException : public std::exception
       {
          public:
             virtual const char *what(void) const throw();
       };
};

template <typename T>
Array<T>::Array(): _items(new T[0]) , _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n): _items(new T[n]), _size(n)
{}

template <typename T>
Array<T>::Array(const Array &ref): _items(new T[ref._size]), _size(ref._size)
{
   for (size_t i = 0; i < _size; i++)
      _items[i] = ref._items[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &ref)
{
   if (this != ref)
   {
      delete [] _items;
      _items = new T[ref._size];
      _size = ref._size;
      for (size_t i = 0; i < _size; i++)
         _items[i] = ref._items[i];
   }
}


template <typename T>
Array<T>::~Array()
{
	delete [] _items;
}

template <typename T>
unsigned int   Array<T>::size(void) const
{
   return (_size);
}

template <typename T>
T  &Array<T>::operator[](unsigned int n)
{
   if (n >= _size)
      throw OutOfBoundsException();
   return _items[n];
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what(void) const throw()
{
   return ("Index out of array bounds");
}
