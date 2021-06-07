/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:00:28 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/07 20:42:20 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    
    std::cout << GREEN << "Welcome to The Original Game!"<< RESET << std::endl;
}
// ClapTrap::ClapTrap(std::string str)
// {
//     this->name = str;
// }

// ClapTrap::ClapTrap(ScavTrap trap)
// {
//     std::cout << GREEN << " Initialing The game with  ScavTrap" << RESET << std::endl;
// }
// ClapTrap::ClapTrap(FragTrap trap)
// {
//     std::cout << GREEN << " Initialing The game with FragTrap" << RESET << std::endl;
// }

ClapTrap::~ClapTrap()
{
    std::cout << GREEN <<"bye bye from Original Game!" <<  RESET << std::endl;
}
