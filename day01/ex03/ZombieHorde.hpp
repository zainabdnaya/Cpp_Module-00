/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:37:20 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/29 15:05:23 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDER_HPP
#define ZOMBIEHORDER_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include "Zombie.hpp"
#include <unistd.h>

class ZombieHorder
{
    private:
        int N;
        Zombie *zombie;
    public:
        ZombieHorder(int N);
        std::string random_name();
        void announce();
        ~ZombieHorder();
};

#endif