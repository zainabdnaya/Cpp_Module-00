/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:09:14 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/26 17:09:07 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
    this->zombie->set_type(type);
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *newz = new Zombie();
    newz->set_name(name);
    return (newz);
}
Zombie *ZombieEvent::randomChump()
{
    int j = 0;
    int k = 0;
    Zombie *newz = new Zombie();
    std::string test;

    srand(time(0));
    for (int i = 0; i < 127; i++)
    {
        j = rand() % 127;
        if ((j >= 65 && j < 90) || (j >= 97 && j < 122))
        {
            test += (char)j;
            k++;
        }
        if (k == 6)
            break;
    }
    newz->set_name(test);
    newz->set_type("scary");
    newz->announce();
    return (newz);
}