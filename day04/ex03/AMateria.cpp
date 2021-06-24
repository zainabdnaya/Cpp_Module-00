/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 22:09:02 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/24 13:38:57 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(): _xp(0)
{
}

AMateria::AMateria(std::string const &type): type(type) , _xp(0)
{
}

AMateria::AMateria(const AMateria &cpy)
{
	*this = cpy;
}

AMateria&			AMateria::operator=(AMateria const &equal)
{
	_xp = equal._xp;
    return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (type);
}

unsigned int		AMateria::getXP(void) const
{
	return (_xp);
}

void				AMateria::use(ICharacter &target)
{
	_xp += 10; 
	(void)target;
}

AMateria::~AMateria(void)
{
}
