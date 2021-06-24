/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:24:02 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/24 14:57:44 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <iomanip> 
#include "Victim.hpp"


class Peon : public Victim
{
public:
    Peon();
    ~Peon();
    Peon(std::string name);
    Peon(Peon const &cpy);
    Peon &operator=(Peon const &equal);
    void getPolymorphed() const;
};

#endif