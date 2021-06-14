/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:19:11 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/14 19:53:39 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &cpy)
{
    *this = cpy;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same !" << std::endl;
}

void Sorcerer::polymorph(Victim const &vic) const
{
    vic.getPolymorphed();
}

std::string Sorcerer::get_name(void)
{
    return (this->name);
}

std::string Sorcerer::get_title(void)
{
    return (this->title);
}


std::ostream &operator<<(std::ostream &output, Sorcerer const &sorc)
{
    output << "I am " + sorc.get_name() + ", " + sorc.get_title() + ", and I like ponies!";
    return output;
}