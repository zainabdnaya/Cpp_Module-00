 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 22:34:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/09 17:42:36 by zdnaya           ###   ########.fr       */
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
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->melee_damage = 30;
	this->ranged_damage = 20;
	this->armor_damage = 5;
	std::cout << "\t\tEnter a Name : " << std::endl;
	std::cout << YELLOW << "\t\t\t" << this->name << RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const &equal)
{
	*this = equal;
	std::cout << "FR4G-TP is Using a Copy Constructor" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " with an sowred." << std::endl;
	std::cout << RED << "\t\tEnergy_points -= 30 " << RESET << std::endl;
	this->Energy_points = this->Energy_points - 30;
		std::cout << RED << "\t\t\t" << target  << " attacks back with a rock & ur Hits_pints -= 30 " << RESET << std::endl;

	this->Hit_points = this->Hit_points - 30;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " with a gun" << std::endl;
	std::cout << RED << "\t\tEnergy_points -= 20 " << RESET << std::endl;
	this->Energy_points = this->Energy_points - 20;
	std::cout << RED << "\t\t\t" << target  << " threw a Granade  & ur Hits_pints -= 30 " << RESET << std::endl;
	this->Hit_points = this->Hit_points - 20;
}

void FragTrap::beRepaired(unsigned int amount)
{
	this->armor_damage = this->armor_damage - amount;
	std::cout << "Still have " << this->armor_damage << std::endl;
	std::cout << YELLOW << "\t\t\tEnergy_points += 10" << RESET << std::endl;
	std::cout << YELLOW << "\t\t\thit_point +=10" << RESET << std::endl;
	this->Energy_points = this->Energy_points + 10;
	this->Hit_points = this->Hit_points + 10;
	if (this->Hit_points > 100)
		this->Hit_points = this->Max_hit_points;
	if (this->Energy_points > 100)
		this->Energy_points = this->Max_energy_points;
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount = this->armor_damage;
	if (this->Hit_points < 0)
		this->Hit_points = 0;
	std::cout << YELLOW << " hit_point : " << this->Hit_points << std::endl;
	if (this->Energy_points < 0)
		this->Energy_points = 0;
	std::cout << "Energy_points : " << this->Energy_points << std::endl;
	std::cout << " u have  " << this->armor_damage <<  " To use as un armor" <<RESET << std::endl;
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
	std::cout << "The Game is loading" << std::endl;
	return (*this);
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->Energy_points >= 25)
	{
		this->Energy_points = this->Energy_points - 25;
		srand((unsigned)time(0));
		int k = 1 + (rand() % 8);
		std::cout << RED << "\t\t\tEnergy_points: " << this->Energy_points << std::endl;
		switch (k)
		{
		case 1:
			std::cout << CYAN << " Piw Piw Piw!" << target << RESET << std::endl;
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
	if (this->Energy_points == 0)
	{
		std::cout << RED << "Game Over!" << RESET << std::endl;
	}
	else if (this->Energy_points > 0)
	{
		this->Level = this->Level + 1;
		std::cout << GREEN << this->name << " You Win champ! "
				  << "Upgrade your  Level to " << this->Level << RESET << std::endl;
	}
}