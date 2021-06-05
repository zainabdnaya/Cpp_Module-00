/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 22:34:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/05 09:26:44 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() :
	hitp(100), max_hitp(100), energy(100), max_energy(100), level(1),
	name(""), melee_dmg(30), ranged_dmg(20), armor_dmg(5)
{
	std::cout << "FR4G-TP is Calling the Constructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const &equal)
{
	*this = equal;
}


FragTrap	&FragTrap::operator=(FragTrap const &cpy)
{
	this->hitp = cpy.hitp;
	this->max_hitp = cpy.max_hitp;
	this->energy = cpy.energy;
	this->max_energy = cpy.max_energy;
	this->level = cpy.level;
	this->name = cpy.name;
	this->melee_dmg = cpy.melee_dmg;
	this->ranged_dmg = cpy.ranged_dmg;
	this->armor_dmg = cpy.armor_dmg;
	return (*this);
}

FragTrap::~FragTrap()
{
}
