/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:41:04 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/07 19:13:00 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
    MutantStack();
    ~MutantStack();
    MutantStack(MutantStack const &cpy);
    MutantStack &operator=(MutantStack const &equal);
    MutantStack(typename std::stack<T>::container_type);
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(typename std::stack<T>::container_type c)
{
    this->c = c;
}

template <typename T>
typename MutantStack<T>::iterator  MutantStack<T>::begin()
{
    return (this->c.begin());
}
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (this->c.end());
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &equal)
{
    this->c = equal.c;
    return (*this);
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &cpy)
{
    *this = cpy;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

#endif