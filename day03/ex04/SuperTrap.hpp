/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:43:20 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/09 15:00:02 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    private:

    public:
        SuperTrap();
        ~SuperTrap();
        SuperTrap(std::string str);
        void    rangedAttack(std::string const &target);
        void    meleeAttack(std::string const &target);
};

#endif