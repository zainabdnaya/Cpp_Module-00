/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:10:29 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/10 14:22:43 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap opponent1 = FragTrap("BOB");
    opponent1.rangedAttack("jack");
    opponent1.meleeAttack("jack");
    opponent1.beRepaired(1);
    opponent1.takeDamage(0);
    opponent1.vaulthunter_dot_exe("jack");
    opponent1.rangedAttack("jack");
    opponent1.meleeAttack("jack");
    opponent1.rangedAttack("jack");
    opponent1.vaulthunter_dot_exe("jack");
    opponent1.takeDamage(0);
}