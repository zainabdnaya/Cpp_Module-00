/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:42:14 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/07 15:08:33 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <iomanip>
#include <vector>

class Span
{
private:
    unsigned int n;
    std::vector<int> vec;
    Span();

public:
    ~Span();
    Span(unsigned int n);
    Span(Span const &cpy);
    Span&operator=(Span const &equal);

    std::vector<int> getvect();
    unsigned int getN();

    void addNumber(int nbr);
    int shortestSpan();
    int longestSpan();

    class ErrorReplica : public std::exception
    {
        virtual const char *what() const throw();
    };
    class ErrorException : public std::exception
    {
        virtual const char *what() const throw();
    };
};

#endif