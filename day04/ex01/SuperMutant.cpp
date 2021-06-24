/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:09:38 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/24 15:45:54 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &cpy) : Enemy(cpy)
{
    if(this != &cpy)
        *this = cpy;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &equal)
{
	Enemy::operator=(equal);
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
    if ( damage <= 3)
        damage = damage - 3;
    else
        damage = 0;
    Enemy::takeDamage(damage);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}