/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:57:05 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/11 12:15:20 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
    ScavTrap();
    public:
    ~ScavTrap();
    ScavTrap(std::string str);
    ScavTrap(ScavTrap const &cpy);
    ScavTrap &operator=(ScavTrap const &equal);
    void challengeNewcomer(std::string const &target);
};

#endif