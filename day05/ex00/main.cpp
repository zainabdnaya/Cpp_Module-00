/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:33:07 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/28 14:27:28 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("a",1);
        std::cout << a;
        Bureaucrat b("b",150);
        std::cout << b;
        std::cout << "******* AFTER OPERATIONS *********" << std::endl; 
        a.decr_Grade();
        std::cout << a;
        b.incr_Grade();
        std::cout << b;
        Bureaucrat c("c",0);
        Bureaucrat d("c",151);
        
    }
    catch(std::exception &ex)
    {
        std::cerr << ex.what();
    }
}