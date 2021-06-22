/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:27:29 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/22 16:47:20 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <cstdio>

Squad::Squad()
{
    count = 0;
    n_th = nullptr;
}

Squad::Squad(Squad const &cpy)
{
    count = cpy.count;
    for(int i = 0; i < count;i++)
        delete n_th[i];
    n_th = new ISpaceMarine *[count];
    for(int i = 0; i < count;i++)
        n_th[i] = cpy.n_th[i];
}

Squad &Squad::operator=(Squad const &equal)
{
    count = equal.count;
    n_th  = equal.n_th;
    return (*this);
}

int Squad::getCount()const
{
    return(count);
}

ISpaceMarine* Squad::getUnit(int N) const
{
    if ( N > count || N < 0 || n_th[N] == nullptr )
        return(nullptr);
    return(n_th[N]);
}

int Squad::push(ISpaceMarine *unit)
{
    if ( count == 0)
    {
        n_th =  new ISpaceMarine *[1];
        n_th[0] = unit;
        count++;
    }
    else
    {
      ISpaceMarine **tmp =  new ISpaceMarine *[count + 1];
        for(int i = 0; i < count + 1; i++)
            tmp[i] = n_th[i];
        *tmp = unit;
        for(int i = 0; i < count ; i++)
             delete n_th[i];
        n_th = tmp;
          for(int i = 0; i < count ; i++)
            delete tmp[i];
        count++;
    }
    return(count);
}

Squad::~Squad() {

  if ( n_th != nullptr)
    for(int i = 0; i < count;i++)
        delete n_th[i];
}