/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:10:29 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/06 18:59:08 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap opponent1 = ScavTrap("BOB");
    opponent1.rangedAttack("jack");
    opponent1.meleeAttack("jack");
    opponent1.beRepaired(1);
    opponent1.takeDamage(0);
    opponent1.rangedAttack("jack");
    opponent1.meleeAttack("jack");
    opponent1.rangedAttack("jack"); 
    opponent1.challengeNewcomer("jack");
    opponent1.takeDamage(0);
}