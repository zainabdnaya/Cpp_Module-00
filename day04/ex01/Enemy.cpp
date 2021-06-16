/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:06:22 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/16 19:49:52 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

// Enemy::Enemy(int hp, std::string const &type)
// {
    // this->hp = hp;
    // this->type = type;
// }

int Enemy::getHP() const
{
    return (this->hp);
}

std::string Enemy::getType() const
{
    return (this->type);
}

void Enemy::takeDamage(int damage)
{
    if (damage < 0)
        std::cout << "do nothing!" << std::endl;
    else
    {
        if (this->hp < 0)
            std::cout << "can't reduce" << std::endl;
        else
            {
                this->hp = this->hp - 10;
                std::cout << "damage taken" << std::endl;
            }
    }
}