/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:57:05 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/07 10:55:42 by zdnaya           ###   ########.fr       */
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
        int         Hit_points;
        int         Max_hit_points;
        int         Energy_points;
        int         Max_energy_points;
        int         Level;
        int         melee_damage;
        int         ranged_damage;
        int         armor_damage;
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