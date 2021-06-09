/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:53:17 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/09 14:29:06 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
    std::cout << "Here we go again!" << std::endl;
}

SuperTrap::SuperTrap(std::string str)
{
    this->SuperTrap::name = str;
    this->SuperTrap::Level = 1;
    this->SuperTrap::Hit_points = 100;
    this->FragTrap::Max_hit_points = 100;
    this->NinjaTrap::Energy_points = 120;
    this->NinjaTrap::Max_energy_points = 120;
    this->NinjaTrap::melee_damage = 60;
    this->FragTrap::ranged_damage = 20;
    this->FragTrap::armor_damage = 5;
    this->NinjaTrap::meleeAttack(str);
}

void    SuperTrap::rangedAttack(std::string const &target)
{
    this->FragTrap::rangedAttack(target);
}

void    SuperTrap::meleeAttack(std::string const &target)
{
    this->NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap()
{
    std::cout << "Bye Bye for last time in this daim day!" << std::endl;
}