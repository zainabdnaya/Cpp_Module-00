/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:00:58 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/18 01:35:55 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <iostream>
#include <sstream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string name;
	int ap;
	AWeapon *weapon;
public:
	Character(std::string const &name);
	Character(Character const &cpy);
	Character &operator=(Character const &equal);
	~Character();
	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
	std::string message() const;
	std::string getName() const;
    int getAp() const;
    AWeapon *get_Aweapon() const;
};

std::ostream &operator<<(std::ostream &output, const Character &character);


#endif