/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:11:06 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/31 11:37:26 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony ::Pony(std::string n)
{
    name = n;
}

void  Pony::ponyOnTheHeap()
{
    Pony *Ponyh = new Pony("seba3e");
    std::cout << " Pony " << Ponyh->name << " in the  Heap!" << std::endl;
    delete Ponyh;
}

void  Pony::ponyOnTheStack()
{
    Pony Ponys("ya9tina");
    std::cout << " Pony " << Ponys.name << " in the stack!" << std::endl;
}

Pony ::~Pony()
{
}