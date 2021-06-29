/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:51:57 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/29 17:58:24 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form()
{
    this->target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : Form(cpy)
{
    this->target = cpy.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &equal)
{
    this->target = equal.target;
    return *this;
}

const char *RobotomyRequestForm::Failed::what() const throw()
{
    return (" has  not been robotomized successfully.");
}


void   RobotomyRequestForm::random(std::string _target)
{
    srand(time(NULL));
    int r = rand() % 2;
    if (r == 0)
    {
        std::cout << _target << " has been robotomized successfully" << std::endl;
    }
    else
        throw Failed();
}

void RobotomyRequestForm::Action() const
{
    try
    {
       RobotomyRequestForm::random(this->target);
    }
    catch(std::exception &exp)
    {
        std::cerr << exp.what();
    }
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
