/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 11:31:30 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/19 11:33:36 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include <iostream>
#include <string>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad
{
private:
    int nbr_unit;
    unsigned int n_th;

public:
	Squad();
	~Squad();
	Squad(Squad const &rhs);
	Squad &operator=(Squad const &rhs);
};

#endif