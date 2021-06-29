/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:40:44 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/29 21:38:10 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{
    target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : Form(cpy)
{
    this->target = cpy.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &equal)
{
    this->target = equal.target;
    return *this;
}


void PresidentialPardonForm::Action() const
{
    std::cout <<  this->target << " has been pardoned by Zafod Beeblebrox."  << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}