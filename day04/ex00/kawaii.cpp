/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kawaii.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:56:22 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/24 14:58:52 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "kawaii.hpp"

kawaii::kawaii(std::string name)
{
    this->name = name;
    std::cout << "Some random kawaii called " << name << " just appeared!" << std::endl;
    std::cout << "tok tok." << std::endl;
}

kawaii::kawaii(kawaii const &cpy)
{
    *this = cpy;
}

void kawaii::getPolymorphed() const {
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

kawaii &kawaii::operator=(kawaii const &equal)
{
    this->name = equal.name;
    return (*this);
}

kawaii::~kawaii()
{
    std::cout << "bye bye..." << std::endl;
}