/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:08:44 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 16:51:28 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

// PowerFits::PowerFits()
// {
//     this->name = "Plasma Rifle";
//     this->apcost = 8;
//     this->damage = 50;
// }

// PowerFits::PowerFits(PowerFits const &equal)
// {
//     *this = equal;
// }

void PowerFits::attack() const
{
    std::cout << "pschhh... SBAM!" << std::endl;
}

PowerFits &PowerFits::operator=(PowerFits const &equal)
{
    this->name = equal.name;
    this->damage = equal.damage;
    this->apcost = equal.apcost;
    return (*this);
}

PowerFits::~PowerFits()
{
    std::cout << "Bye bye!" << std::endl;
}