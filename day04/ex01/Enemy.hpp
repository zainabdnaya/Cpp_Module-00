/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:01:41 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/18 00:42:00 by zainabdnaya      ###   ########.fr       */
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
        std::string type;
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