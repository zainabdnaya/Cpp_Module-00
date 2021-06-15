/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:31:09 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 09:54:15 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"



Peon::Peon(std::string name)
{
    this->name = name;
    std::cout << "Some random Peon called " << name << " just appeared! " << std::endl;
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &cpy)
{
    *this = cpy;
}

void Peon::getPolymorphed() const {
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

Peon &Peon::operator=(Peon const &equal)
{
    this->name = equal.name;
    return (*this);
}

Peon::~Peon()
{
    std::cout << "Bleuark.." << std::endl;
}

