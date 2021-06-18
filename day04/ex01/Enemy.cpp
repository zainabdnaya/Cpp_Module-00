/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:06:22 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/18 15:50:03 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type)
{
}

Enemy::Enemy(Enemy const &cpy)
{
	*this = cpy;
}

Enemy &Enemy::operator=(Enemy const &equal)
{
	hp = equal.hp;
	type = equal.type;
	return *this;
}

int Enemy::getHP() const
{
	return (hp);
}

std::string Enemy::getType() const
{
	return type;
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	if (damage < hp)
		hp = hp - damage;
	else
		hp = 0;
}

Enemy::~Enemy()
{
}
