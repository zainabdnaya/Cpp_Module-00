/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 22:34:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/07 11:03:24 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hitp = 100;
	this->max_hitp = 100;
	this->energy = 100;
	this->max_energy = 100;
	this->level = 1;
	this->melee_dmg = 30;
	this->ranged_dmg = 20;
	this->armor_dmg = 5;
	this->name = "";
	std::cout << " Initializing the game" << std::endl;
}

FragTrap::FragTrap(std::string str)
{
	this->name = str;
	this->hitp = 100;
	this->max_hitp = 100;
	this->energy = 100;
	this->max_energy = 100;
	this->level = 1;
	this->melee_dmg = 30;
	this->ranged_dmg = 20;
	this->armor_dmg = 5;
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
	std::cout << this->name << " attacks " << target << " from a close distance." << std::endl;
	std::cout << RED << "\t\tEnergy -= 30 " << RESET << std::endl;
	this->energy = this->energy - 30;
	this->hitp = this->hitp - 30;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " form a long  range." << std::endl;
	std::cout << RED << "\t\tEnergy -= 20 " << RESET << std::endl;
	this->energy = this->energy - 20;
	this->hitp = this->hitp - 20;
}

void FragTrap::beRepaired(unsigned int amount)
{
	this->armor_dmg = this->armor_dmg - amount;
	std::cout << "Using armor against one attack, you still have " << this->armor_dmg << std::endl;
	std::cout << YELLOW << "\t\t\tEnergy += 10" << RESET << std::endl;
	std::cout << YELLOW << "\t\t\thit_point +=10" << RESET << std::endl;
	if (this->hitp > 100)
		this->hitp = this->max_hitp;
	if (this->energy > 100)
		this->energy = this->max_energy;
	this->energy = this->energy + 10;
	this->hitp = this->hitp + 10;
}

void FragTrap::takeDamage(unsigned int amount)
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

FragTrap &FragTrap::operator=(FragTrap const &cpy)
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
	if (this->energy == 0)
	{
		std::cout << RED << "Game Over!" << RESET << std::endl;
	}
	else if (this->energy > 0)
	{
		this->level = this->level + 1;
		std::cout << GREEN << this->name << " You Win! "
				  << " Upgrade your Level to  " << this->level << RESET << std::endl;
	}
}