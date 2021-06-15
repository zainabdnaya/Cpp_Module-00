/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:24:02 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 09:40:37 by zdnaya           ###   ########.fr       */
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
private:
    Peon();
public:
    ~Peon();
    Peon(std::string name);
    Peon(Peon const &cpy);
    Peon &operator=(Peon const &equal);
    void getPolymorphed() const;
};

#endif