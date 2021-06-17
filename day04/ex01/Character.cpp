/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:05:44 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 12:05:59 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
    this->name = name;
    this->ap = 40;
    this->AWeapon = nullptr;
}

Character::Character(Character const &cpy)
{
	*this = cpy;
}

Character &Character::operator=(Character const &equal)
{
	name = equal.name;
	ap = equal.ap;
	weapon = equal.weapon;
	return *this;
}

std::string Character::getName() const;`
{
    return(this->name);
}

std::string Character::getAp() const;`
{
    return(this->ap);
}

AWeapon *Character::get_Aweapon() const;`
{
    return(this->get_Aweapon);
}

std::ostream &operator<<(std::ostream &output, const Character &character)
{
    std::string str; 

	if (weapon == nullptr)
        str =  character.getName() +  " has " + character.getAp() + " and " + "is unarmed";
	else
        str =  character.getName() +  " has " + character.getAp() + " and " + "wields a " << character.get_Aweapon()->getName();
    output << str << std::endl;
	return output;
}

void Character::recoverAP()
{
    if (this->ap + 10 > 40 )
        this->ap = 40;
    else 
        this->ap  = this->ap + 10;
}

void Character::attack(Enemy *enemy)
{
	if (enemy == nullptr)
	{
		std::cout << "No Enemy Left" << std::endl;
		return;
    }
    if (this->weapon == nullptr)
		return;
    else
	{
            std::cout << name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	        this->ap = this->ap - weapon->getAPCost();
	        this->weapon->attack();
	        enemy->takeDamage(this->weapon->getDamage());
	        if (enemy->getHP() == 0)
	        {
		            delete enemy;
                    enemy = nullptr;
            }
    }
}



void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}



Character::~Character()
{
}
