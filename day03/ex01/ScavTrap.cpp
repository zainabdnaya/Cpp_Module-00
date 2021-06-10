/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:57:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/10 17:17:32 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 50;
    this->Max_energy_points = 50;
    this->Level = 1;
    this->melee_damage = 20;
    this->ranged_damage = 15;
    this->armor_damage = 3;
    this->name = "";
    std::cout << " Welcome the game" << std::endl;
}

ScavTrap::ScavTrap(std::string str)
{
    this->name = str;
    std::cout << YELLOW << "\t\t\t" << this->name << RESET << std::endl;

    this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 50;
    this->Max_energy_points = 50;
    this->Level = 1;
    this->melee_damage = 20;
    this->ranged_damage = 15;
    this->armor_damage = 3;
}


ScavTrap::ScavTrap(ScavTrap const &equal)
{
    *this = equal;
    std::cout << "ScavTrap have an ALLay" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << this->name << " attacks " << target << " from a close distance." << std::endl;
    std::cout << RED << "\t\tEnergy -= 20 " << RESET << std::endl;
    this->Energy_points = this->Energy_points - 20;
    	std::cout << RED << "\t\t\t" << target  << " use a stick to bit u & ur Hits_pints -= 20 " << RESET << std::endl;

    this->Hit_points = this->Hit_points - 20;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << this->name << " attacks " << target << " form a long  range." << std::endl;
    std::cout << RED << "\t\tEnergy -= 15 " << RESET << std::endl;
    this->Energy_points = this->Energy_points - 15;
    std::cout << RED << "\t\t\t" << target  << " Use 2 guns & ur Hits_pints -= 15 " << RESET << std::endl;
    this->Hit_points = this->Hit_points - 15;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    this->armor_damage = this->armor_damage - amount;
    std::cout << "Using armor against one attack, you still have " << this->armor_damage << std::endl;
    std::cout << YELLOW << "\t\t\tEnergy += 10" << RESET << std::endl;
    std::cout << YELLOW << "\t\t\thit_point +=10" << RESET << std::endl;
    if (this->Hit_points > 100)
        this->Hit_points = this->Max_hit_points;
    if (this->Energy_points > 100)
        this->Energy_points = this->Max_energy_points;
    this->Energy_points = this->Energy_points + 5;
    this->Hit_points = this->Hit_points + 5;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    amount = this->armor_damage;
    if (this->Hit_points < 0)
        this->Hit_points = 0;
    std::cout << YELLOW << "hit_point % = " << this->Hit_points << std::endl;
    if (this->Energy_points < 0)
        this->Energy_points = 0;
    std::cout << "Energy % = " << this->Energy_points << std::endl;
    std::cout << "number of armor_dmg left = " << this->armor_damage << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &cpy)
{
    std::cout << "The Game is preloading" << std::endl;
    this->Hit_points = cpy.Hit_points;
    this->Max_hit_points = cpy.Max_hit_points;
    this->Energy_points = cpy.Energy_points;
    this->Max_energy_points = cpy.Max_energy_points;
    this->Level = cpy.Level;
    this->name = cpy.name;
    this->melee_damage = cpy.melee_damage;
    this->ranged_damage = cpy.ranged_damage;
    this->armor_damage = cpy.armor_damage;
    return (*this);
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
    int k = 1;
    srand(time(NULL));
    k = rand() % 7;
    switch (k)
    {
    case 1:
        std::cout << CYAN << "CHALENGE_NUMBER_1: Ice Bucket Challenge ,  against " << target << RESET << std::endl;
        break;
    case 2:
        std::cout << CYAN << "CHALENGE_NUMBER_2 : Drawing a character  Blindfolded  against " << target << RESET << std::endl;
        break;

    case 3:
        std::cout << CYAN << "CHALENGE_NUMBER_3 : Makeup Challenge against " << target << RESET << std::endl;
        break;

    case 4:
        std::cout << CYAN << "CHALENGE_NUMBER_4: Hot Chili Challeng against " << target << RESET << std::endl;
            break;

    case 5:
        std::cout << CYAN << "CHALENGE_NUMBER_5: Brain Freezer Challenge  against " << target << RESET << std::endl;
        break;

    case 6:
        std::cout << CYAN << "CHALENGE_NUMBER_6:  Talk To A Stranger Challenge against " << target << RESET << std::endl;
        break;

    case 7:
        std::cout << CYAN << "CHALENGE_NUMBER_7: Guess The Song Challenge against " << target << RESET << std::endl;
    default:
        std::cout << CYAN << "CHALENGE_NUMBER_2: Eating A Cake With The Hands Tied Back Challenge  against " << target << RESET << std::endl;

        break;
    }
}

ScavTrap::~ScavTrap()
{
    if (this->Energy_points == 0 && this->Hit_points == 0)
        std::cout << RED << "Game Over!" << RESET << std::endl;
    else if (this->Energy_points > 0 || this->Hit_points > 0)
    {
        this->Level = this->Level + 1;
        std::cout << GREEN << this->name << " You Win! "
                  << " Upgrade your Level to  " << this->Level << RESET << std::endl;
    }
}