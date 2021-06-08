/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:17:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/08 12:20:50 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
    std::cout << CYAN << "Welcome to The Original Game!" << RESET << std::endl;
}

NinjaTrap::NinjaTrap(std::string str)
{
    this->name = str;
    this->Hit_points = 60;
    this->Max_hit_points = 60;
    this->Energy_points = 120;
    this->Max_energy_points = 120;
    this->Level = 1;
    this->melee_damage = 60;
    this->ranged_damage = 5;
    this->armor_damage = 0;
}

NinjaTrap::~NinjaTrap()
{
    
}