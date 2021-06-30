/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:33:07 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 14:17:06 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b2("b2",145);
        ShrubberyCreationForm f2("f2");
        f2.Action();
        b2.signForm(f2);
        f2.BeSigned(b2);
        std::cout << f2;
        b2.executeForm(f2);
        // f2.execute(b2);
        std::cout << "***********************************" << std::endl;
        Bureaucrat b1("b1",45);
        RobotomyRequestForm f1("f1");
        b1.signForm(f1);
        f1.BeSigned(b1);
        std::cout << f1;
        b1.executeForm(f1);
        f1.execute(b1);
        std::cout << "***********************************" << std::endl;
        Bureaucrat b3("b3",50);
        PresidentialPardonForm f3("f3");
        b3.signForm(f3);
        f3.BeSigned(b3);
        std::cout << f3;
        b3.executeForm(f3);
        f3.execute(b3);

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}