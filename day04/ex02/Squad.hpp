/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 11:31:30 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/21 21:30:25 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include <iostream>
#include <string>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{

public:
	Squad();
	~Squad();
	Squad(Squad const &rhs);
	Squad &operator=(Squad const &rhs);

	//Interface Use
	int getCount() const ;
	ISpaceMarine *getUnit(int N) const ;
	int push(ISpaceMarine *);
};

#endif