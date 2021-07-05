/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:49:07 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/05 14:05:14 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>

template <class T>
class Array
{
    private:
        unsigned int n;
        T *array;
    public:
        Array();
       virtual ~Array();
       Array(unsigned int n);
       Array<T> &operator=(Array const &equal);
       Array(Array const &cpy);

       T &operator[](unsigned int i);
       
              
};

template <class T>
Array<T>::Array()
{
    n = 0;
    this->array = new T[0];
}

template <class T>
Array<T>::Array(unsigned int n) : n(n)
{
    this->array = new T[n];
    for(int i = 0; i < n; i++)
        this->array = 0;
}

template <class T>
Array<T>::Array(unsigned int n) : n(n)
{
    this->array = new T[n];
    for(int i = 0; i < n; i++)
        this->array = 0;
}

template <class T>
Array<T> &Array<T>::operator=(Array const &equal)
{
    this->n = equal.n;
    this->array =  new T[n];
    for(int i = 0; i < n; i++)
        this->array[i] = equal.array[i];
    return(*this);
}


template <class T>
Array<T> &Array<T>::operator=(Array const &equal)
{
    this->n = equal.n;
    this->array =  new T[n];
    for(int i = 0; i < n; i++)
        this->array[i] = equal.array[i];
    return(*this);
}

template <class T>
Array<T>::Array(Array const &cpy)
{
    this = *cpy;
}



template <class T>
T &Array<T>::operator(unsigned int i) 
{
    if ( i > n)
        throw std::exception();
    return(Array[i]);
}





#endif