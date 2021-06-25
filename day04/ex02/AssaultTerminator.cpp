/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 21:38:19 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/25 18:07:44 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}


AssaultTerminator::AssaultTerminator(AssaultTerminator const &cpy)
{
    (void)cpy;
    std::cout << "* teleports from space *"  << std::endl;
}


AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &equal)
{
    if (this != &equal)
        *this = equal;
    return(*this);
}


ISpaceMarine* AssaultTerminator::clone() const {
  
  AssaultTerminator*clone = new AssaultTerminator(*this);
    return(clone);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!"  << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with a chainfists *" << std::endl;
}


AssaultTerminator::~AssaultTerminator()
{
  std::cout << "I'll be back..." << std::endl;
}