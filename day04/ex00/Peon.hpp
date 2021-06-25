/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:24:02 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/25 19:16:00 by zainabdnaya      ###   ########.fr       */
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
    virtual ~Peon();
    Peon(std::string name);
    Peon(Peon const &cpy);
    Peon &operator=(Peon const &equal);
    void getPolymorphed() const;
};

#endif