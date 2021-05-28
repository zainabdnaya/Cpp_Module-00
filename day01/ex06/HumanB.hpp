/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:00:21 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/28 17:32:04 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>
#include "Weapon.hpp"


class HumanB{
    private :
        std::string name;
        Weapon *Weapon_b;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &w);
        void    attack();
};
#endif