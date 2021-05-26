/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 10:34:02 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/26 17:58:23 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << "< " << name << " (" << type << ")" << " >  Braiiiiiiinnnssss..." << std::endl ;
}


Zombie::Zombie()
{
    this->name = "";
    this->type = "";
}

void Zombie::set_name(std::string name)
{
    this->name =  name;
}

void Zombie::set_type(std::string type)
{
    this->type = type;
}
Zombie::~Zombie()
{
    
}