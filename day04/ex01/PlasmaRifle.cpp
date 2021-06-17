/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:08:09 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/16 17:25:12 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
    this->name = "Plasma Rifle";
    this->apcost = 5;
    this->damage = 21;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &equal)
{
    *this = equal;
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &equal)
{
    this->name = equal.name;
    this->damage = equal.damage;
    this->apcost = equal.apcost;
    return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
}