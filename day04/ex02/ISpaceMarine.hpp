/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 11:00:04 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/22 15:54:18 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP
#include <iostream>
#include <sstream>
#include <cstring>

class ISpaceMarine
{
public:
    virtual ~ISpaceMarine() {}
    virtual ISpaceMarine *clone() const = 0;
    virtual void battleCry() const = 0;
    virtual void rangedAttack() const = 0;
    virtual void meleeAttack() const = 0;
};

#endif
