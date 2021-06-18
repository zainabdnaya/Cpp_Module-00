/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:05:44 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/18 15:47:02 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : name(name), ap(40), weapon(nullptr)
{
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

std::string Character::getName() const
{
    return (this->name);
}

int Character::getAp() const
{
    return (this->ap);
}

AWeapon *Character::get_Aweapon() const
{
    return (this->weapon);
}

std::string Character::message() const
{
    std::ostringstream str;

    if (this->weapon != nullptr)
        str << this->name << " has " << ap << " and " << "wields a " << weapon->getName() << std::endl;
    else
        str << name << " has " << ap << " and " << "is unarmed" << std::endl;
    return (str.str());
}

std::ostream &operator<<(std::ostream &output, const Character &character)
{
    output << character.message();
    return output;
}

void Character::recoverAP()
{
    if (ap + 10 > 40)
        ap = 40;
    else
        ap = ap + 10;
}

void Character::attack(Enemy *enemy)
{
    if (enemy == nullptr)
    {
        std::cout << "No Enemy Left" << std::endl;
        return;
    }
    if (weapon == nullptr)
    {
        std::cout << "No Weapon Left" << std::endl;
        return;
    }
    else
    {
        if (ap < weapon->getAPCost())
        {
            std::cout << "No ap Left" << std::endl;
            return;
        }
        else
        {
            std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
            ap = ap - weapon->getAPCost();
            weapon->attack();
            enemy->takeDamage(weapon->getDamage());
            if (enemy->getHP() == 0)
            {
                delete enemy;
                enemy = nullptr;
            }
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
