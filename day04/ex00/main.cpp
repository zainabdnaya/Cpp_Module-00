/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:20:30 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 09:48:55 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jimmy");
    Peon joe("Joe");
    
    std::cout << robert << jim << joe;
    
    robert.polymorph(jim);
    robert.polymorph(joe);
    return 0;
}