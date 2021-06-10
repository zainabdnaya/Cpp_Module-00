/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:00:28 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/10 17:19:51 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

    std::cout << CYAN << "Welcome to The Original Game!" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string str)
{
    this->name = str;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << this->name << " attacks " << target << " from a close distance." << std::endl;
    std::cout << YELLOW << "\t\tEnergy_points -= " << this->melee_damage << RESET << std::endl;
    this->Energy_points = this->Energy_points - this->melee_damage;
    this->Hit_points = this->Hit_points - this->melee_damage;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << this->name << " attacks " << target << " form a long  range." << std::endl;
    std::cout << YELLOW << "\t\tEnergy_points -= " << this->ranged_damage << RESET << std::endl;
    this->Energy_points = this->Energy_points - this->ranged_damage;
    this->Hit_points = this->Hit_points - this->ranged_damage;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    amount = 0;
    if (this->Hit_points < 0)
        this->Hit_points = 0;
    std::cout  << "hit_point % = " << this->Hit_points << std::endl;
    if (this->Energy_points < 0)
        this->Energy_points = 0;
    std::cout << "Energy_points % = " << this->Energy_points << std::endl;
    std::cout << "number of armor_damage left = " << this->armor_damage <<  std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->armor_damage = this->armor_damage - amount;
    std::cout << "Using armor against one attack, you still have " << this->armor_damage << std::endl;
    std::cout << YELLOW << "\t\t\tEnergy_points += 10" << RESET << std::endl;
    std::cout << YELLOW << "\t\t\thit_point +=10" << RESET << std::endl;
    this->Energy_points = this->Energy_points + 10;
    this->Hit_points = this->Hit_points + 10;
    if (this->Hit_points > 100)
        this->Hit_points = this->Max_hit_points;
    if (this->Energy_points > 100)
        this->Energy_points = this->Max_energy_points;
}

ClapTrap::~ClapTrap()
{
    if (this->Energy_points > 0 || this->Hit_points > 0)
    {
        this->Level = this->Level + 1;
        std::cout << CYAN << this->name << " You Win! "
                  << " Upgrade your Level to  " << this->Level << RESET << std::endl;
    }
    std::cout << CYAN << "bye bye from Original Game!" << RESET << std::endl;
}

std::string ClapTrap::getName()
{
    return (this->name);
}
