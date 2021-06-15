/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:03:04 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 15:59:39 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include <iostream>
#include <string>
#include <sstream>
#include "AWeapon.hpp"

class PowerFits : public AWeapon
{
    private:

    public:
        PowerFits();
        ~PowerFits();
        PowerFits(PowerFits const &cpy);
        PowerFits &operator=(PowerFits const &equal);
        virtual void attack() const = 0;
};

#endif