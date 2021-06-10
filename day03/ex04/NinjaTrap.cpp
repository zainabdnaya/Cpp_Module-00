/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:17:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/10 17:18:10 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
    std::cout << "Hello Ninja!"  << std::endl;
    this->name = std::string();
    this->Hit_points = 60;
    this->Max_hit_points = 60;
    this->Energy_points = 120;
    this->Max_energy_points = 120;
    this->Level = 1;
    this->melee_damage = 60;
    this->ranged_damage = 5;
    this->armor_damage = 0;
}

NinjaTrap::NinjaTrap(std::string str)
{
    this->name = str;
    this->Hit_points = 60;
    this->Max_hit_points = 60;
    this->Energy_points = 120;
    this->Max_energy_points = 120;
    this->Level = 1;
    this->melee_damage = 60;
    this->ranged_damage = 5;
    this->armor_damage = 0;
}

void NinjaTrap::ninjaShoebox(ClapTrap clap)
{
    clap.meleeAttack(clap.getName());
    std::cout << clap.getName() << "  Stand in the ashes of a trillion dead souls, and asks the ghosts if honor matters. The silence is your answer.! " << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap frag)
{
    frag.vaulthunter_dot_exe("frag");
    std::cout << " I'll kill u with my CandyBar " << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap scav)
{
    scav.challengeNewcomer("scav");
    std::cout << " You damAss , u can't hold a swored " << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap ninja)
{
    std::cout << ninja.name << " ninja POOO here for justice " << std::endl;
    ninja.rangedAttack(ninja.getName());
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "Bye Bye Ninja!"  << std::endl;
}