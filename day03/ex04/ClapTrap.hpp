/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:00:32 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/10 17:18:33 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

class ClapTrap
{
    protected:
        std::string     name;
        int             Hit_points;
        int             Max_hit_points;
        int             Energy_points;
        int             Max_energy_points;
        int             Level;
        int             melee_damage;
        int             ranged_damage;
        int             armor_damage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string str);

        virtual void rangedAttack(std::string const &target);
        virtual void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();
};


#endif