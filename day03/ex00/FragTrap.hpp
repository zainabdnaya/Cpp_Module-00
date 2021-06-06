/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:17:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/06 16:12:45 by zdnaya           ###   ########.fr       */
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
#define BLUE "\033[34m"         
#define MAGENTA "\033[35m"         
#define CYAN "\033[36m"         
#define WHITE "\033[37m"         
#define BOLDRED "\033[1m\033[31m"   
#define BOLDGREEN "\033[1m\033[32m"   
#define BOLDYELLOW "\033[1m\033[33m"
#define BOLDBLUE "\033[1m\033[34m"   
#define BOLDMAGENTA "\033[1m\033[35m" 
#define BOLDCYAN "\033[1m\033[36m"   
#define BOLDWHITE "\033[1m\033[37m"   

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
        void                meleeAtack(std::string const &target);
        void                takeDamage(unsigned int amount);
        void                beRepair(unsigned int amount);
        void                vaulthunter_dot_exe(std::string const &target);
};

#endif