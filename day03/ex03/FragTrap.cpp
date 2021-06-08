/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 22:34:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/08 10:19:12 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->melee_damage = 30;
	this->ranged_damage = 20;
	this->armor_damage = 5;
	this->name = "";
	std::cout << " Initializing the game" << std::endl;
}

FragTrap::FragTrap(std::string str)
{
	this->name = str;
	std::cout << YELLOW << "\t\t\tWelcome " << this->name << " to the Child Game" << RESET << std::endl;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->melee_damage = 30;
	this->ranged_damage = 20;
	this->armor_damage = 5;
}

FragTrap &FragTrap::operator=(FragTrap const &cpy)
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

FragTrap::FragTrap(FragTrap const &equal)
{
	*this = equal;
	std::cout << "FR4G-TP is Using a Copy Constructor" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int k = 0;
	k = rand() % 7;
	switch (k)
	{
	case 1:
		std::cout << CYAN << "\t\t\tTake that !" << target << RESET << std::endl;
		break;
	case 2:
		std::cout << CYAN << "\t\t\tBadass " << target << "?! Aaahhh!" << RESET << std::endl;
		break;
	case 3:
		std::cout << CYAN << "\t\t\tCrap, one shot left!" << RESET << std::endl;
		break;
	case 4:
		std::cout << CYAN << "\t\t\tThis is why I was built !" << RESET << std::endl;
		break;
	case 5:
		std::cout << CYAN << "\t\t\tI am a tornado of death and bullets!" << RESET << std::endl;
		break;
	case 6:
		std::cout << CYAN << "\t\t\tGrenaaaade!" << RESET << std::endl;
		break;
	case 7:
		std::cout << CYAN << "\t\t\tHot potato!" << RESET << std::endl;
		break;
	default:
		std::cout << CYAN << "\t\t\tI am a tornado of death and bullets!" << RESET << std::endl;
		break;
	}

}

FragTrap::~FragTrap()
{
	std::cout << GREEN << "\t\t\tbye bye from the child!" << RESET << std::endl;
}