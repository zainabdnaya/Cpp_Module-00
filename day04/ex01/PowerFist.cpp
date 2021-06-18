/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:08:44 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/18 01:06:05 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{
}

PowerFist::PowerFist(PowerFist const &cpy): AWeapon(cpy)
{
}

PowerFist &PowerFist::operator=(PowerFist const &equal)
{
	AWeapon::operator=(equal);
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
PowerFist::~PowerFist()
{
}
