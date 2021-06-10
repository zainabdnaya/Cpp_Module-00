/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:53:17 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/10 20:07:56 by zdnaya           ###   ########.fr       */
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
}

SuperTrap &SuperTrap::operator=(SuperTrap const &cpy)
{
    this->Hit_points = cpy.Hit_points;
    this->Max_hit_points = cpy.Max_hit_points;
    this->Energy_points = cpy.Energy_points;
    this->Max_energy_points = cpy.Max_energy_points;
    this->Level = cpy.Level;
    this->name = cpy.name;
    this->melee_damage = cpy.melee_damage;
    this->ranged_damage = cpy.ranged_damage;
    this->armor_damage = cpy.armor_damage;
    std::cout << "The Game is reloading" << std::endl;
    return (*this);
}

SuperTrap::SuperTrap(SuperTrap const &equal)
{
    *this = equal;
    std::cout << "FR4G-TP have an Allay" << std::endl;
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
    std::cout << "Bye Bye for last time from this daim day!" << std::endl;
}