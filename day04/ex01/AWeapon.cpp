/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:05:32 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/23 13:00:43 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
    this->name = name;
    this->apcost = apcost;
    this->damage = damage;
}

AWeapon::AWeapon(AWeapon const &cpy)
{
    *this = cpy;
}

std::string AWeapon::getName() const
{
    return (this->name);
}

int AWeapon::getAPCost() const
{
    return (this->apcost);
}

int AWeapon::getDamage() const
{
    return (this->damage);
}



AWeapon &AWeapon::operator=(AWeapon const &equal)
{
    this->name = equal.name;
    this->damage = equal.damage;
    this->apcost = equal.apcost;
    return (*this);
}

AWeapon::~AWeapon()
{
}