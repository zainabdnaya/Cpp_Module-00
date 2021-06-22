/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 11:03:35 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/22 11:20:03 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP
#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{

public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine *getUnit(int) const = 0;
    virtual int push(ISpaceMarine *) = 0;
};

#endif
