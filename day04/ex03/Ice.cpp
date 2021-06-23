/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 13:39:03 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/23 13:46:27 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    name = "Ice";
}

Ice    &Ice::operator=(Ice const &equal)
{
    name = equal.name;
    return(*this);    
}

Ice::Ice(const Ice &cpy)
{
    *this = cpy;
}

AMateria *Ice::clone(void) const
{
    Ice *clone = new Ice (*this);
    return(clone);  
}

void 		Ice::use(ICharacter& target)
{
    std::cout << "* heals  "<< target.getName() << "'s wounds *" << std::endl;
}


Ice::~Ice()
{
    
}