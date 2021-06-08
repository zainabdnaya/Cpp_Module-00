/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:10:29 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/08 19:08:51 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    ScavTrap opponent1;
    std::cout << "-------------------------------------------------" << std::endl;
    FragTrap opponent2;
    std::cout << "-------------------------------------------------" << std::endl;
    ClapTrap clap;
    std::cout << "-------------------------------------------------" << std::endl;
    NinjaTrap ninja("hamza");
    std::cout << "-------------------------------------------------" << std::endl;
    ninja.ninjaShoebox(opponent2);
    std::cout << "-------------------------------------------------" << std::endl;
    ninja.ninjaShoebox(opponent2);
    std::cout << "-------------------------------------------------" << std::endl;
    ninja.ninjaShoebox(clap);
    std::cout << "-------------------------------------------------" << std::endl;
    ninja.ninjaShoebox(ninja);
    
}