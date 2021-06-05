/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:17:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/04 23:00:27 by zainabdnaya      ###   ########.fr       */
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
        FragTrap(FragTrap const &cpy);
        FragTrap	&operator=(FragTrap const &equal);
        void        rangedAttack(std::string const & target);
        void        meleeAtack(std::string const &target);
        void        takeDamage(unsigned int amount);
        void        beRepair(unsigned int amount);
};

#endif