/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:31:30 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/24 14:12:43 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &cpy)
{
    *this = cpy;
}

void Victim::getPolymorphed() const 
{
    std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}
Victim &Victim::operator=(Victim const &equal)
{
    this->name = equal.name;
    return (*this);
}

std::string const &Victim::get_name(void) const
{
    return (this->name);
}

std::ostream &operator<<(std::ostream &out, Victim const &vic)
{
    out << "I'm " << vic.get_name() << " and I like otters!" << std::endl;
    return (out);
}


Victim::~Victim()
{
    std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}