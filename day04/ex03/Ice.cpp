/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:39:03 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/24 13:50:19 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice &Ice::operator=(Ice const &equal)
{
    this->_xp = equal._xp;
    return (*this);
}

Ice::Ice(const Ice &cpy)
{
    *this = cpy;
}

AMateria *Ice::clone(void) const
{
    Ice *clone = new Ice(*this);
    return (clone);
}

void Ice::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() <<" *" <<std::endl;
}

Ice::~Ice()
{
}