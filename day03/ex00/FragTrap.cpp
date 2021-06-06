/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 22:34:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/06 16:05:42 by zdnaya           ###   ########.fr       */
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
	std::cout << "\t\t\t" << this->name << std::endl;
}

FragTrap::FragTrap(FragTrap const &equal)
{
	*this = equal;
	std::cout << "FR4G-TP is Using a Copy Constructor" << std::endl;
}

void FragTrap::meleeAtack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " from a close distance." << std::endl;
	std::cout << "\t\tEnergy -= 30 " << std::endl;
	this->energy = this->energy - 30;
	this->hitp = this->hitp - 30;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " form a long  range." << std::endl;
	std::cout << "\t\tEnergy -= 20 " << std::endl;
	this->energy = this->energy - 20;
	this->hitp = this->hitp - 20;
}

void FragTrap::beRepair(unsigned int amount)
{
	this->armor_dmg = this->armor_dmg - amount;
	std::cout << "Using armor against one attack, you still have " << this->armor_dmg << std::endl;
	std::cout << "\t\t\tEnergy += 10" << std::endl;
	std::cout << "\t\t\thit_point +=10" << std::endl;
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
	if ( this->hitp < 0)
		this->hitp = 0;
	std::cout << "hit_point %  = " << this->hitp << std::endl;
	if ( this->energy < 0)
		this->energy = 0;
	std::cout << "Energy % = " << this->energy << std::endl;
	std::cout << "number of armor_dmg left = " << this->armor_dmg << std::endl;
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
	int k;

	for (int i = 0; i < 8; i++)
		k = rand() % 7;
	switch (k)
	{
	case 1:
		std::cout << " Take that !" << target << std::endl;
		break;
	case 2:
		std::cout << "Badass " << target << "?! Aaahhh!" << std::endl;
	case 3:
		std::cout << "Crap, one shot left!" << std::endl;
	case 4:
		std::cout << "This is why I was built !" << std::endl;
	case 5:
		std::cout << "I am a tornado of death and bullets!" << std::endl;
	case 6:
		std::cout << "Grenaaaade!" << std::endl;
	case 7:
		std::cout << "Hot potato!" << std::endl;
	default:
		break;
	}
	
}

FragTrap::~FragTrap()
{
	if (this->energy == 0)
	{
		std::cout << "Game Over!" << std::endl;
	}
	else if (this->energy > 0)
	{
		this->level = this->level + 1;
		std::cout << this->name << " You Win! "
				  << "You upgrade the Level " << this->level << std::endl;
	}
}