/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 22:34:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/05 14:24:52 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : name(""), hitp(100), max_hitp(100), energy(100), max_energy(100), level(1), melee_dmg(30), ranged_dmg(20), armor_dmg(5)
{
	std::cout << " Initializing the game" << std::endl;
}

FragTrap::FragTrap(std::string str)
{
	this->name = str;
	std::cout << "\t\tEnter a Name : " << std::endl;
	std::cout << "\t\t\t" << this->name << std::endl;
}

FragTrap::FragTrap(FragTrap const &equal)
{
	*this = equal;
	std::cout << "FR4G-TP is Using a Copy Constructor" << std::endl;
}

std::string FragTrap::get_name()
{
	return (this->name);
}

int FragTrap::get_energy()
{
	return (this->energy);
}

void FragTrap::set_energy(int energy, int value)
{
	this->energy = energy - value;
}

void takeDamage(unsigned int amount)
{
	int pow;
	// if (attack == 1)
	{
		pow = get_energy();
		set_energy(pow, amount);
		std::cout << "\t\tEnergy -= 20 " << std::endl;
	}
	// else if (attack == 2)
	// {
	// }
	// attack = 0;
}
void FragTrap::meleeAtack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " form a range." << std::endl;
	// std::cout <<
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " form a range." << std::endl;
	// std::cout << "\t\tEnergy -= 20 " << std::endl;
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

FragTrap::~FragTrap()
{
	// std::cout << "Game Over!" << std::endl;
}
