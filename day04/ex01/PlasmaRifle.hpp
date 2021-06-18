/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:02:12 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/18 15:14:47 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include <iostream>
#include <string>
#include <sstream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    private:

    public:
        PlasmaRifle();
        virtual ~PlasmaRifle();
        PlasmaRifle(PlasmaRifle const &cpy);
        PlasmaRifle &operator=(PlasmaRifle const &equal);
        void attack()const;
};
#endif