/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 22:24:15 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/25 19:48:35 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
    _idx = 0;
    for(int i= 0; i  < 4; i++)
        _m[i] = nullptr;
}

Character::Character(Character const &cpy)
{
    *this = cpy;
}

Character    &Character::operator=(Character const &equal)
{
    for(int i = 0;i < _idx ; i++)
       delete _m[i];
    _name = equal._name;
    _idx = equal._idx;
    for(int i = 0;i < _idx ; i++)
    {
        _m[i] = equal._m[i]; 
    }
    return(*this);    
}

std::string const &Character::getName(void) const
{
    return(_name);
}

int Character::getNumber(void)const
{
    return(_idx);
}

void    Character::equip(AMateria *m)
{
    if ( _idx >= 4 || m == nullptr)
        return;
    _m[_idx] = m;
    _idx++;
}

void    Character::unequip(int idx)
{
    if ( idx > 0 && idx < _idx)
    {
        int i = idx;
         for( ;i < _idx; i++ )
            _m[i] = _m[i+1];
        _m[i] = nullptr;
    }
}

void    Character::use(int idx, ICharacter& target)
{
    if ( idx >= 0 && idx < _idx && _idx > 0)
        _m[idx]->use(target);
}

Character::~Character(void)
{

}
