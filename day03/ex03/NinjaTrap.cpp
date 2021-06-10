/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:17:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/10 20:09:48 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
    std::cout << "Hello Ninja!"  << std::endl;
    this->name = "";
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
    std::cout<<  " I'll kill u with my CandyBar "  << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap scav)
{
    scav.challengeNewcomer("scav");
    std::cout << " You damAss , u can't hold a swored "  << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap ninja)
{
    std::cout  << ninja.name << " ninja POOO here for justice "  << std::endl;
    ninja.rangedAttack(ninja.getName());
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "Bye Bye Ninja!"  << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &cpy)
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

NinjaTrap::NinjaTrap(NinjaTrap const &equal)
{
    *this = equal;
    std::cout << "FR4G-TP have an Allay" << std::endl;
}