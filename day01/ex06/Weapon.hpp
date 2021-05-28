/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 08:39:19 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/05/28 17:40:14 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iomanip>
#include <string>
#include <sstream>

class Weapon{
    private:
    std::string type;
    public:
        Weapon(std::string str);
        void setType(std::string str);
        const std::string &getType();
};

#endif