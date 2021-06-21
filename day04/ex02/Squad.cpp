/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:27:29 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/21 21:30:18 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    count = 0;
    unsigned int a = 0;
    n_th = &a;
}

int Squad::getCount()const
{
    return (count);
}

ISpaceMarine* Squad::getUnit(int N) const
{

}

Squad::~Squad()
{
    
}