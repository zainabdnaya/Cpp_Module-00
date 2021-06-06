/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:57:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/06 18:58:27 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->hitp = 100;
    this->max_hitp = 100;
    this->energy = 50;
    this->max_energy = 50;
    this->level = 1;
    this->melee_dmg = 20;
    this->ranged_dmg = 15;
    this->armor_dmg = 3;
    this->name = "";
    std::cout << " Initializing the game" << std::endl;
}

ScavTrap::ScavTrap(std::string str)
{
    this->name = str;
    this->hitp = 100;
    this->max_hitp = 100;
    this->energy = 50;
    this->max_energy = 50;
    this->level = 1;
    this->melee_dmg = 20;
    this->ranged_dmg = 15;
    this->armor_dmg = 3;
    std::cout << "\t\tEnter a Name : " << std::endl;
    std::cout << YELLOW << "\t\t\t" << this->name << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &equal)
{
    *this = equal;
    std::cout << "FR4G-TP is Using a Copy Constructor" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << this->name << " attacks " << target << " from a close distance." << std::endl;
    std::cout << RED << "\t\tEnergy -= 20 " << RESET << std::endl;
    this->energy = this->energy - 20;
    this->hitp = this->hitp - 20;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << this->name << " attacks " << target << " form a long  range." << std::endl;
    std::cout << RED << "\t\tEnergy -= 15 " << RESET << std::endl;
    this->energy = this->energy - 15;
    this->hitp = this->hitp - 15;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    this->armor_dmg = this->armor_dmg - amount;
    std::cout << "Using armor against one attack, you still have " << this->armor_dmg << std::endl;
    std::cout << YELLOW << "\t\t\tEnergy += 10" << RESET << std::endl;
    std::cout << YELLOW << "\t\t\thit_point +=10" << RESET << std::endl;
    if (this->hitp > 100)
        this->hitp = this->max_hitp;
    if (this->energy > 100)
        this->energy = this->max_energy;
    this->energy = this->energy + 5;
    this->hitp = this->hitp + 5;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    amount = 0;
    if (this->hitp < 0)
        this->hitp = 0;
    std::cout << YELLOW << "hit_point % = " << this->hitp << std::endl;
    if (this->energy < 0)
        this->energy = 0;
    std::cout << "Energy % = " << this->energy << std::endl;
    std::cout << "number of armor_dmg left = " << this->armor_dmg << RESET << std::endl;
}

ScavTrap &
ScavTrap::operator=(
    ScavTrap const &cpy)
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
    std::cout << "The Game is loading" << std::endl;
    return (*this);
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
    int k = 0;
    srand(time(NULL));
    k = rand() % 7;
    switch (k)
    {
    case 1:
        std::cout << CYAN << "CHALENGE_NUMBER_1 against "  << target << RESET << std::endl;
        break;
    case 2:
        std::cout << CYAN << "CHALENGE_NUMBER_2 against " << target << "?! Aaahhh!" << RESET << std::endl;
        break;

    case 3:
        std::cout << CYAN << "CHALENGE_NUMBER_3 against " << target  << RESET << std::endl;
        break;

    case 4:
        std::cout << CYAN << "CHALENGE_NUMBER_4 against " << target << RESET << std::endl;
        break;

    case 5:
        std::cout << CYAN << "CHALENGE_NUMBER_5 against "  << target << RESET << std::endl;
        break;

    case 6:
        std::cout << CYAN << "CHALENGE_NUMBER_6 against " << target<< RESET << std::endl;
        break;

    case 7:
        std::cout << CYAN << "CHALENGE_NUMBER_7 against " << target << RESET << std::endl;
    default:
        break;
    }
}

ScavTrap::~ScavTrap()
{
    if (this->energy == 0)
    {
        std::cout << RED << "Game Over!" << RESET << std::endl;
    }
    else if (this->energy > 0)
    {
        this->level = this->level + 1;
        std::cout << GREEN << this->name << " You Win! "
                  << "You upgrade the Level " << this->level << RESET << std::endl;
    }
}