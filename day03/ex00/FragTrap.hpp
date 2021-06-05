/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:17:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/05 14:18:08 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <string>

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
        // std::string         get_name();
        // int                 get_energy();
        // void                set_energy(int energy, int val);
        void                rangedAttack(std::string const & target);
        void                meleeAtack(std::string const &target);
        void                takeDamage(unsigned int amount);
        void                beRepair(unsigned int amount);
        void                vaulthunter_dot_exe(std::string const &target);
};

#endif