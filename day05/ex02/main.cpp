/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:33:07 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/29 10:21:39 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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
        std::cout << "******* AFTER From *********" << std::endl; 

    }
    catch(std::exception &e)
    {
        std::cerr << e.what();
    }
}