/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:09:23 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/26 12:40:33 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstring>
#include "Zombie.hpp"

class ZombieEvent
{
    // private:
public:
    Zombie *zombie;
    void setZombieType(std::string type);
    Zombie *newZombie(std::string name);
};

#endif