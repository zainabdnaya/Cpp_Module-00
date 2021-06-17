/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:09:38 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 12:09:48 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
    this->hp = 170;
    this->type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &cpy)
{
    *this = cpy;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &equal)
{
	this->hp = equal.hp;
	this->type = equal.type;
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
    if ( damage <= 3)
        damage = damage - 3;
    else
        damage = 0;
}
