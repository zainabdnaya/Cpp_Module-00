/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:59:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/26 18:19:43 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <unistd.h>

int main()
{
    Zombie zombie;
    ZombieEvent zombievent;

    zombie.set_name("zainab");
    zombie.set_type("master");
    zombie.announce();
    zombievent.randomChump();
    
}