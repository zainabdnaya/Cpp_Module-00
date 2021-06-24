/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:46:42 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/24 13:49:39 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    index = 0;
    for (int i = 0; i < 4; i++)
        A[i] = nullptr;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (index >= 4 || m == nullptr)
    {
        return;
    }
    A[index] = m;
    index++;
}

MateriaSource::MateriaSource(MateriaSource const &cpy)
{
    if (this != &cpy)
        *this = cpy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &equal)
{
    for (int i = 0; i < index; i++)
        delete A[i];
    index = equal.index;
    for (int i = 0; i < index; i++)
        A[i] = equal.A[i];
    return (*this);
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < index; i++)
    {
        if (type == A[i]->getType())
            return (A[i]->clone());
    }
    return (0);
}