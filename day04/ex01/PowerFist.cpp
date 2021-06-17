/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:08:44 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/16 18:38:00 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
{
    this->name = "Plasma Rifle";
    this->apcost = 8;
    this->damage = 50;
}

PowerFist::PowerFist(PowerFist const &equal)
{
    *this = equal;
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist &PowerFist::operator=(PowerFist const &equal)
{
    this->name = equal.name;
    this->damage = equal.damage;
    this->apcost = equal.apcost;
    return (*this);
}

PowerFist::~PowerFist()
{
}