/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:54:08 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/23 16:10:40 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    name = "cure";
}

Cure    &Cure::operator=(Cure const &equal)
{
    name = equal.name;
    return(*this);    
}

Cure::Cure(const Cure &cpy)
{
    *this = cpy;
}

AMateria *Cure::clone(void) const
{
    // Cure *clone = new Cure (*this);
    return  new Cure (*this);
    // return(clone);  
}

void 		Cure::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}


Cure::~Cure()
{
    
}