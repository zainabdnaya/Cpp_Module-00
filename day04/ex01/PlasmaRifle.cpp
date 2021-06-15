/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:08:09 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 15:59:42 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

Plasmarifle::Plasmarifle()
{
    this->name = "Plasma Rifle";
    this->apcost = 5;
    this->damage = 21;
}

Plasmarifle::Plasmarifle(Plasmarifle const &equal)
{
    *this = equal;
}

void Plasmarifle::attack() const
{
    std::cout << "pschhh... SBAM!" << std::endl;
}

Plasmarifle &Plasmarifle::operator=(Plasmarifle const &equal)
{
    this->name = equal.name;
    this->damage = equal.damage;
    this->apcost = equal.apcost;
    return (*this);
}

Plasmarifle::~Plasmarifle()
{
    std::cout << "Bye bye!" << std::endl;
}