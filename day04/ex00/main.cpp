/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:20:30 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/24 14:59:59 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "kawaii.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");

    Victim jim("Jimmy");
    Peon joe("Joe");
    kawaii kw("poo");
    
    std::cout << robert << jim << joe << kw;
    
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(kw);
    return 0;
}