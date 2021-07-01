/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:51:57 by zainabdnaya       #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/06/30 15:22:02 by zainabdnaya      ###   ########.fr       */
=======
/*   Updated: 2021/06/30 20:20:07 by zdnaya           ###   ########.fr       */
>>>>>>> b8be971bd585b115abc2dc2afd501df1f45510fa
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
    if (this != &equal)
        this->target = equal.target;
    return *this;
}

const char *RobotomyRequestForm::Failed::what() const throw()
{
    return (" it’s a failure.\n");
}


void   RobotomyRequestForm::random(std::string _target)
{
    srand(time(NULL));
    int r = rand() % 2;
    if (r == 0)
    {        
        std::cout << " nOise Of DrIll " << std::endl;
<<<<<<< HEAD
        std::cout << "\t ********* dddddrrrrrrrrrrrrrrrr ********** " << std::endl;
=======
        std::cout << "\t ********  dddddrrrrrrrrrrrrrrrr *****" << std::endl;
        std::cout << "\t ⛏⛏⛏✨⛏🔧⛏⛏✨⛏🔧⛏⛏⛏✨⛏🔧⛏⛏✨⛏⛏" << std::endl;
	    std::cout << "\t ⛏🔧✨⛏🔧⛏⛏✨⛏🔧⛏⛏🔧✨⛏🔧⛏⛏✨⛏🔧⛏" << std::endl;
	    std::cout << "\t ⛏⛏⛏⛏✨⛏🔧⛏✨⛏🔧⛏⛏✨⛏🔧⛏⛏✨⛏🔧⛏" << std::endl;
>>>>>>> b8be971bd585b115abc2dc2afd501df1f45510fa
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


