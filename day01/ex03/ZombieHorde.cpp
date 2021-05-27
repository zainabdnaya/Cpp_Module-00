/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:47:47 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/27 13:14:41 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorder::random_name()
{
    std::string test;
    int j = 0;
    int k = 0;

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
    return (test);
}

ZombieHorder::ZombieHorder(int N)
{
    int j = 0;
    this->zombie = new Zombie[N];
    this->N = N;
    while (j < N)
    {
        this->zombie[j].set_name(this->random_name());
        j++;
        // sleep(1);
    }
}

void    ZombieHorder::announce()
{
    int i = 0;

    while(i < this->N)
    {
        this->zombie[i].announce();
        i++;
    }
}

ZombieHorder::~ZombieHorder()
{
    delete[] this->zombie;
}