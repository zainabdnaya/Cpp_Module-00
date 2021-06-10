/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 22:34:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/10 19:56:36 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	melee_damage = 30;
	ranged_damage = 20;
	armor_damage = 5;
	name = "";
	std::cout << " Game Loading" << std::endl;
}

FragTrap::FragTrap(std::string str)
{
	name = str;
	std::cout << YELLOW << "\t\t\t " << name  << " has enter the Game "<< RESET << std::endl;
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	melee_damage = 30;
	ranged_damage = 20;
	armor_damage = 5;
}

FragTrap::FragTrap(FragTrap const &equal)
{
	*this = equal;
	std::cout << "FR4G-TP  have a Allay" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << name << " attacks " << target << " from a close diatance." << std::endl;
	std::cout << RED << "\t\tEnergy_points -= 30 " << RESET << std::endl;
	Energy_points = Energy_points - 30;
	std::cout << RED << "\t\t\t" << target  << "Hits_pints -= 30 " << RESET << std::endl;
	Hit_points = Hit_points - 30;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << name << " attacks " << target << " from a long range" << std::endl;
	std::cout << RED << "\t\tEnergy_points -= 20 " << RESET << std::endl;
	Energy_points = Energy_points - 20;
	std::cout << RED << "\t\t\t" << target << "Hits_pints -= 20 " << RESET << std::endl;
	Hit_points = Hit_points - 20;
}

void FragTrap::beRepaired(unsigned int amount)
{
	armor_damage = armor_damage - amount;
	std::cout << "Using armor against one attack, you still have " << armor_damage << std::endl;
	std::cout << YELLOW << "\t\t\tEnergy_points += 10" << RESET << std::endl;
	std::cout << YELLOW << "\t\t\thit_point +=10" << RESET << std::endl;
	Energy_points = Energy_points + 10;
	Hit_points = Hit_points + 10;
	if (Hit_points > 100)
		Hit_points = Max_hit_points;
	if (Energy_points > 100)
		Energy_points = Max_energy_points;
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount = 0;
	if (Hit_points < 0)
		Hit_points = 0;
	std::cout << YELLOW << "hit_point % = " << Hit_points << std::endl;
	if (Energy_points < 0)
		Energy_points = 0;
	std::cout << "Energy_points % = " << Energy_points << std::endl;
	std::cout << "number of armor_damage left = " << armor_damage << RESET << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &cpy)
{
	Hit_points = cpy.Hit_points;
	Max_hit_points = cpy.Max_hit_points;
	Energy_points = cpy.Energy_points;
	Max_energy_points = cpy.Max_energy_points;
	Level = cpy.Level;
	name = cpy.name;
	melee_damage = cpy.melee_damage;
	ranged_damage = cpy.ranged_damage;
	armor_damage = cpy.armor_damage;
	std::cout << "The Game is loading" << std::endl;
	return (*this);
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (Energy_points >= 25)
	{
		Energy_points = Energy_points - 25;
		srand(time(NULL));
		int k = rand() % 7;
		std::cout << RED << "\t\t\tEnergy_points: " << Energy_points << std::endl;
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
	if (Energy_points == 0)
	{
		std::cout << RED << "Hurrryyyy !Game Over!" << RESET << std::endl;
	}
	else if (Energy_points > 0)
	{
		Level = Level + 1;
		std::cout << GREEN << name << " Congrat , You Win! "
				  << "Upgrade your  Level to " << Level << RESET << std::endl;
	}
}