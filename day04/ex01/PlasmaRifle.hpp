/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:02:12 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 15:45:42 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include <iostream>
#include <string>
#include <sstream>
#include "AWeapon.hpp"

class Plasmarifle : public AWeapon
{
    private:

    public:
        Plasmarifle();
        ~Plasmarifle();
        Plasmarifle(Plasmarifle const &cpy);
        Plasmarifle &operator=(Plasmarifle const &equal);
        virtual void attack()const = 0;
};
#endif