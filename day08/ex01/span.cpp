/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:42:09 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/07 15:12:40 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n)
{
    this->n = n;
}

unsigned int Span::getN()
{
    return (this->n);
}

std::vector<int> Span::getvect()
{
    return this->vec;
}

void Span::addNumber(int nbr)
{
    if (this->vec.size() < n)
    {
        this->vec.push_back(nbr);
        // in case of replicat
        // for (unsigned int j = 0; j < this->vec.size(); j++)
        // {
        //     if (nbr == this->vec.at(j))
        //         {
        //             throw ErrorReplica();
        //             return;
        //         }
        // }
    }
    else
        throw ErrorException();
}

int Span::shortestSpan()
{
    std::vector<int> tmp;

    tmp = this->vec;
    sort(tmp.begin(), tmp.end());
    return (tmp[1] - tmp[0]);
}

int Span::longestSpan()
{
    std::vector<int> tmp;

    tmp = this->vec;
    sort(tmp.begin(), tmp.end());
    return (tmp[tmp.size() - 1] - tmp[0]);
}

const char *Span::ErrorReplica::what() const throw()
{
    return "Warning: Replicated number\n";
}

const char *Span::ErrorException::what() const throw()
{
    return "Warning: You push over the Given size\n";
}

Span& Span::operator=(Span const &equal)
{
    this->n = equal.n;
    this->vec = equal.vec;
    return(*this);
}

Span::Span(Span const &cpy)
{
    *this = cpy;
}

Span::~Span()
{
}