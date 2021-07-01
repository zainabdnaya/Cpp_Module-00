/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:40:44 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 13:27:00 by zainabdnaya      ###   ########.fr       */
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
    if ( this != &equal)
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