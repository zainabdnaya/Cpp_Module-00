/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:28:23 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/07 15:11:56 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(5);
    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(11);
        sp.addNumber(4);
        for (unsigned int i = 0; i < sp.getN(); i++)
            std::cout << "==>" << sp.getvect().at(i) << std::endl;

        std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
        std::cout << "longestSpan  : " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what();
    }

    Span sp2 = Span(10000);
    for (unsigned int j = 0; j < sp2.getN(); j++)
        sp2.addNumber(j);
    try
    {
        std::cout << "shortestSpan : " << sp2.shortestSpan() << std::endl;
        std::cout << "longestSpan  : " << sp2.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}