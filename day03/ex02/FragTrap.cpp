/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 22:34:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/07 18:55:46 by zdnaya           ###   ########.fr       */
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
	std::cout << YELLOW << "\t\t\tWelcome "<<  this->name << " to the Child from the Original Game" << RESET << std::endl;
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
		std::cout << CYAN << "This is why I was built !" << RESET << std::endl;
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
	k = rand() % 7;
}

FragTrap::~FragTrap()
{
	// if (this->Energy_points == 0)
	{
		std::cout << RED << "bye bye from the child!" << RESET << std::endl;
	}
	// else if (this->Energy_points > 0)
	{
		// this->Level = this->Level + 1;
		// std::cout << GREEN << this->name << " You Win! "
		// 		  << "Upgrade your  Level to " << this->Level << RESET << std::endl;
	}
}