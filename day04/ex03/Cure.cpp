/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:54:08 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/24 13:45:35 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure &Cure::operator=(Cure const &equal)
{
        _xp = equal._xp ;
    return (*this);
}

Cure::Cure(const Cure &cpy)
{
    *this = cpy;
}

AMateria *Cure::clone(void) const
{
    // Cure *clone = new Cure (*this);
    return new Cure(*this);
    // return(clone);
}

void Cure::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}

Cure::~Cure()
{
}