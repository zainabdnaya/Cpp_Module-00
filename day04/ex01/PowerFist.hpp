/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:03:04 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/24 15:14:31 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include <iostream>
#include <string>
#include <sstream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    private:

    public:
        PowerFist();
        virtual ~PowerFist();
        PowerFist(PowerFist const &cpy);
        PowerFist &operator=(PowerFist const &equal);
        virtual void attack() const;
};

#endif