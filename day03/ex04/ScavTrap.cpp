/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:57:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/11 12:17:04 by zdnaya           ###   ########.fr       */
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
    std::cout << " Initializing the game" << std::endl;
}

ScavTrap::ScavTrap(std::string str)
{
    this->name = str;
    std::cout << YELLOW << "\t\t\tWelcome " << this->name << " to the Child  Game" << RESET << std::endl;
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
    std::cout << "FR4G-TP is Using a Copy Constructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &cpy)
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

void ScavTrap::challengeNewcomer(std::string const &target)
{
    srand((unsigned)time(0));
    int k = 1 + (rand() % 8);
    switch (k)
    {
    case 1:
        std::cout << CYAN << "\t\t\tCHALENGE_NUMBER_1 against " << target << RESET << std::endl;
        break;
    case 2:
        std::cout << CYAN << "\t\t\tCHALENGE_NUMBER_2 against " << target << RESET << std::endl;
        break;
    case 3:
        std::cout << CYAN << "\t\t\tCHALENGE_NUMBER_3 against " << target << RESET << std::endl;
        break;
    case 4:
        std::cout << CYAN << "\t\t\tCHALENGE_NUMBER_4 against " << target << RESET << std::endl;
        break;
    case 5:
        std::cout << CYAN << "\t\t\tCHALENGE_NUMBER_5 against " << target << RESET << std::endl;
        break;
    case 6:
        std::cout << CYAN << "\t\t\tCHALENGE_NUMBER_6 against " << target << RESET << std::endl;
        break;
    case 7:
        std::cout << CYAN << "\t\t\tCHALENGE_NUMBER_7 against " << target << RESET << std::endl;
        break;
    default:
        std::cout << CYAN << "\t\t\tCHALENGE_NUMBER_8 against " << target << RESET << std::endl;
        break;
    }
}

ScavTrap::~ScavTrap()
{
    std::cout << GREEN << "bye bye from the child!" << RESET << std::endl;
}