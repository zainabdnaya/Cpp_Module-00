/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:57:05 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/06 18:46:22 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
#define RESET "\033[0m"
#define RED "\033[31m"         
#define GREEN "\033[32m"         
#define YELLOW "\033[33m"         
#define CYAN "\033[36m"     

class ScavTrap
{
	
    private:
        std::string name;
        int         hitp;
        int         max_hitp;
        int         energy;
        int         max_energy;
        int         level;
        int         melee_dmg;
        int         ranged_dmg;
        int         armor_dmg;
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string str);
        ScavTrap(ScavTrap const &cpy);
        ScavTrap	        &operator=(ScavTrap const &equal);
        void                rangedAttack(std::string const & target);
        void                meleeAttack(std::string const &target);
        void                takeDamage(unsigned int amount);
        void                beRepaired(unsigned int amount);
	    void                challengeNewcomer(std::string const &target);
};

#endif