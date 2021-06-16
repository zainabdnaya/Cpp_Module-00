/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:03:04 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/16 18:35:56 by zdnaya           ###   ########.fr       */
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
        ~PowerFist();
        PowerFist(PowerFist const &cpy);
        PowerFist &operator=(PowerFist const &equal);
        void attack() const;
};

#endif