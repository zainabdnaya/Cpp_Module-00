/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:10:29 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/08 10:17:43 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap opponent1("BOB");
    opponent1.rangedAttack("jack");
    opponent1.meleeAttack("jack");
    opponent1.challengeNewcomer("jack");
    opponent1.takeDamage(0);
    opponent1.beRepaired(1);
    std::cout << "-------------------------------------------------" << std::endl;
    FragTrap opponent2("Marly");
    opponent2.rangedAttack("jack");
    opponent2.meleeAttack("jack");
    opponent2.vaulthunter_dot_exe("jack");
    opponent2.rangedAttack("jack");
    opponent2.takeDamage(0);
}