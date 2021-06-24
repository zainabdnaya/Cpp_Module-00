/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:41:23 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/24 15:49:29 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>
#include <string>
#include <sstream>

class AWeapon
{
    protected:
        std::string name;
        int damage;
        int apcost;
    public:
        AWeapon(std::string const &name, int apcost, int damage);
        virtual ~AWeapon();
        AWeapon(AWeapon const &cpy);
        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        AWeapon &operator=(AWeapon const &equal);
        virtual void attack()const = 0;
};

#endif