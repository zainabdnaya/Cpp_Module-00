/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:06:22 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 16:50:28 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

// Enemy::Enemy(int hp, std::string const &type)
// {
//     this->hp = hp;
//     // this->type =;
// }

int Enemy::getHP()const{
    return (this->hp);
}

std::string  Enemy::getType()const
{
    return(this->type);
}

void Enemy::takeDamage(int)
{
    
}