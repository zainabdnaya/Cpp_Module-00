/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:17:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/04 18:48:44 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <string>

class FragedTrap
{
    private:
        std::string name;
        int         hit_point;
        int         max_hitpoint;
        int         energy_point;
        int         max_energypoint;
        int         level;
        int         m_att_damage;
        int         r_att_damage;
        int         a_dam_reduce;
    public:
        FragedTrap();
        ~FragedTrap();
        void        rangedAttack(std::string const & target);
        void        meleeAtack(std::string const &target);
        void        takeDamage(unsigned int amount);
        void        beRepair(unsigned int amount);
};

#endif