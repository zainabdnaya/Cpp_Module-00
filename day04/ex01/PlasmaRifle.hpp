/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:02:12 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/25 19:00:23 by zainabdnaya      ###   ########.fr       */
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
    public:
        PlasmaRifle();
        virtual ~PlasmaRifle();
        PlasmaRifle(PlasmaRifle const &cpy);
        PlasmaRifle &operator=(PlasmaRifle const &equal);
        void attack()const;
};
#endif