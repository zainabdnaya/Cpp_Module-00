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

Enemy::Enemy(int hp, std::string const &type)
{
    this->hp = hp;
    this->type = type;
}

Enemy::Enemy(Enemy const &cpy)
{
	*this = cpy;
}  

Enemy &Enemy::operator=(Enemy const &equal)
{
	this->hp = equal.hp;
	this->type = equal.type;
	return *this;
}

int Enemy::getHP() const
{
	return (this->hp);
}

std::string Enemy::getType() const
{
	return type;
}

void Enemy::takeDamage(int damage)
{
    if (damage > this->hp)
        this->hp = 0;
    else
        this->hp = this->hp - damage;
}

Enemy::~Enemy()
{
}

