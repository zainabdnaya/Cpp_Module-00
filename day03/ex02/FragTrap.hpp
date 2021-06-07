/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:17:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/07 11:19:19 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <string>
#include <stdlib.h>

#define RESET "\033[0m"
#define RED "\033[31m"         
#define GREEN "\033[32m"         
#define YELLOW "\033[33m"         
#define CYAN "\033[36m"         


class FragTrap
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
        FragTrap();
        ~FragTrap();
        FragTrap(std::string str);
        FragTrap(FragTrap const &cpy);
        FragTrap	        &operator=(FragTrap const &equal);
        void                rangedAttack(std::string const & target);
        void                meleeAttack(std::string const &target);
        void                takeDamage(unsigned int amount);
        void                beRepaired(unsigned int amount);
        void                vaulthunter_dot_exe(std::string const &target);
};

#endif