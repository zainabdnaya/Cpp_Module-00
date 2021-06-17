/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:00:58 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 12:01:36 by zdnaya           ###   ########.fr       */
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
	AWeapon *weapon;
	std::string name;
	int ap;
public:
	Character(std::string const &name);
	Character(Character const &cpy);
	Character &operator=(Character const &equal);
	~Character();
	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
	std::string getName() const;
    int getAp();
    AWeapon *get_Aweapon();
};

std::ostream &operator<<(std::ostream &output, const Character &character);


#endif