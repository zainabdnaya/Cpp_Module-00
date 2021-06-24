/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:08:09 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/24 15:41:39 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &cpy) :  AWeapon(cpy)
{
	if ( this != &cpy)
		*this = cpy;
}
void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &equal)
{
	AWeapon::operator=(equal);
	return *this;
}

PlasmaRifle::~PlasmaRifle()
{
}