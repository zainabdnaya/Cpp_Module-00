/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 08:39:18 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/05/28 17:40:27 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    this->type = str;
}
void    Weapon::setType(std::string str)
{
    this->type = str;
}

const std::string&  Weapon::getType()
{
    return (this->type);
}