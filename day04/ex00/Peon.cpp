/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:31:09 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/14 19:43:21 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

// Peon::Peon()
// {
//     std::cout << "Zog zog." << std::endl;
// }

Peon::Peon(std::string name)
{
    std::cout << "Zog zog." << std::endl;
    std::cout << "Some random Peon called " << name << " just appeared! " << std::endl;
}

Peon::Peon(Peon const &cpy)
{
    *this = cpy;
}

void Peon::getPolymorphed() const {
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}


Peon::~Peon()
{
    std::cout << "Bleuark.." << std::endl;
}

