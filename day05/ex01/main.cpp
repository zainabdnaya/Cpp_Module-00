/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:33:07 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 12:48:20 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a("a", 1);
        std::cout << a;
        Bureaucrat b("b", 10);
        std::cout << b;
        std::cout << "******* AFTER OPERATIONS *********" << std::endl;
        a.decr_Grade();
        std::cout << a;
        b.incr_Grade();
        std::cout << b;
        std::cout << "******* AFTER From f0 *********" << std::endl;
        Form f0("f0", 11, 3);
        a.signForm(f0);
        b.signForm(f0);
        f0.BeSigned(a);
        std::cout << f0;
        f0.BeSigned(b);
        std::cout << f0;
        std::cout << "******* AFTER From f1 *********" << std::endl;
        Form f1("f1", 5, 1);
        a.signForm(f1);
        b.signForm(f1);
        f1.BeSigned(a);
        std::cout << f1;
        f1.BeSigned(b);
        std::cout << f1;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what();
    }
}