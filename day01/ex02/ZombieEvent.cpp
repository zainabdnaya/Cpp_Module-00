/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:09:14 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/26 13:05:00 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
    this->zombie->set_type(type);
}

Zombie * ZombieEvent::newZombie(std::string name)
{
    Zombie *newz = new Zombie();
    newz->set_name(name);
    return (newz);
}
