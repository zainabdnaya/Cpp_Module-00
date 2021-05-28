/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:00:15 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/28 17:41:09 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &w)
{
    this->Weapon_b = &w;
}

void HumanB::attack()
{
    if (this->Weapon_b)
        std::cout << this->name << "  attacks with his " << this->Weapon_b->getType() << std::endl;
}