/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:20:40 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/09 12:11:31 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include <iostream>
#include <string.h>
#include <strstream>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
private:

public:
    NinjaTrap();
    ~NinjaTrap();
    NinjaTrap(std::string str);
    NinjaTrap &NinjaTrap::operator=(NinjaTrap const &cpy);
    void ninjaShoebox(ClapTrap clap);
    void ninjaShoebox(FragTrap frag);
    void ninjaShoebox(ScavTrap scav);
    void ninjaShoebox(NinjaTrap ninja);
};

#endif
