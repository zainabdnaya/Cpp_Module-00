/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 13:28:35 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/28 17:44:47 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w)
{
    this->name = name;
    this->weapon_A = &w;
}

void HumanA::attack()
{
    if ( this->weapon_A)
    std::cout << this->name << "  attacks with his " << this->weapon_A->getType() << std::endl;
}
