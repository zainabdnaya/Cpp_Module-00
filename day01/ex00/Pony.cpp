/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:11:06 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/30 13:18:53 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


void Pony::ponyOnTheHeap()
{
    Pony *Ponyh =  new Pony;
    std::cout << " Pony in Heap!" << std::endl;
    delete  Ponyh;
}
void  Pony::ponyOnTheStack()
{
    Pony pony;
    std::cout << " Pony in stack!" << std::endl;
}
