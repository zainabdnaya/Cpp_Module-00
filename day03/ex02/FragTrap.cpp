/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 22:34:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/10 17:17:29 by zdnaya           ###   ########.fr       */
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
	std::cout << "FR4G-TP have an Allay" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->Energy_points >= 25)
	{
		this->Energy_points = this->Energy_points - 25;
		srand(time(NULL));
		int k = rand() % 7;
		std::cout << RED << "\t\t\tEnergy_points: " << this->Energy_points << std::endl;
		switch (k)
		{
		case 1:
			std::cout << CYAN << " Take that !" << target << RESET << std::endl;
			break;
		case 2:
			std::cout << CYAN << "Badass " << target << "?! Aaahhh!" << RESET << std::endl;
			break;

		case 3:
			std::cout << CYAN << "Crap, one shot left!" << RESET << std::endl;
			break;

		case 4:
			std::cout << CYAN << "AWKWAAAAARD! !" << RESET << std::endl;
			break;

		case 5:
			std::cout << CYAN << "I am a tornado of death and bullets!" << RESET << std::endl;
			break;

		case 6:
			std::cout << CYAN << "Grenaaaade!" << RESET << std::endl;
			break;
		case 7:
			std::cout << CYAN << "Hot potato!" << RESET << std::endl;
		default:
			std::cout << CYAN << "Crap, one shot left!" << RESET << std::endl;
			break;
		}
	}
	else
		std::cout << RED << "\t\t\t⚠️ Warning : You don't have enough energy for this attack!" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << GREEN << "\t\t\tbye bye from the child!" << RESET << std::endl;
}