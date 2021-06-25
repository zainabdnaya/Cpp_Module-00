/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:08:09 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/25 19:00:34 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle",5, 21)
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