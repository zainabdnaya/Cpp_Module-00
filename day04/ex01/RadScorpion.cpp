/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:09:06 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 12:09:26 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
    this->hp = 80;
    this->type = "RadScorpion"
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &cpy)
{
    *this = cpy;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &equal)
{
	this->hp = equal.hp;
	this->type = equal.type;
	return *this;
}
