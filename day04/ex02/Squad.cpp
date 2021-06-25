/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 17:27:29 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/25 18:31:29 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    count = 0;
    n_th = nullptr;
}

Squad::Squad(Squad const &cpy)
{
    *this = cpy;
}

Squad &Squad::operator=(Squad const &equal)
{
    count = equal.count;
    delete [] n_th;
    n_th = new ISpaceMarine *[count];
    for (int i = 0; i < count; i++)
        n_th[i] = equal.n_th[i];
    return (*this);
}

int Squad::getCount() const
{
    return (count);
}

ISpaceMarine *Squad::getUnit(int N) const
{
    if (N > count || N < 0 || n_th[N] == nullptr)
        return (nullptr);
    return (n_th[N]);
}

int Squad::push(ISpaceMarine *unit)
{
    if (count == 0)
    {
        n_th = new ISpaceMarine *[1];
        n_th[0] = unit;
        count++;
    }
    else
    {
        int i;
        ISpaceMarine **tmp = new ISpaceMarine *[count + 1];
        for (i = 0; i < count; i++)
            tmp[i] = n_th[i];
        tmp[i] = unit;
        delete[] n_th;
        n_th = tmp;
        count++;
    }
    return (count);
}

Squad::~Squad()
{
    for (int i = 0; i < this->count; i++)
        delete this->n_th[i];
    delete[] n_th;
    
}