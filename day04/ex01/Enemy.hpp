/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:01:41 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/16 19:42:22 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>
#include <string>
#include <sstream>

class Enemy
{
    protected:
        int hp;
        std::string const &type;
    public:
	Enemy(int hp, std::string const &type);
	virtual ~Enemy();
	Enemy(Enemy const &cpy);
	Enemy &operator=(Enemy const &equal);
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif