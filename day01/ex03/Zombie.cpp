/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:31:38 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/27 12:37:13 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << "< " << name << " (" << type << ") " << ">  Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie()
{
    this->name = "";
    this->type = "";
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::set_type(std::string type)
{
    this->type = type;
}
Zombie::~Zombie()
{
}