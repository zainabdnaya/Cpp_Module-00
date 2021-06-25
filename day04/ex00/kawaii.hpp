/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kawaii.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:56:25 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/25 21:03:04 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAWAII_HPP
#define KAWAII_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <iomanip> 
#include "Victim.hpp"


class kawaii : public Victim
{
public:
    kawaii();
    virtual ~kawaii();
    kawaii(std::string name);
    kawaii(kawaii const &cpy);
    kawaii &operator=(kawaii const &equal);
    void getPolymorphed() const;
};

#endif