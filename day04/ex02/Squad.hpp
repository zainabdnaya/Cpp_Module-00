/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 11:31:30 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/22 16:06:36 by zdnaya           ###   ########.fr       */
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

private:
    int count;
    ISpaceMarine** n_th;
public:
	Squad();
	~Squad();
	Squad(Squad const &cpy);
	Squad &operator=(Squad const &equal);

	//Interface Use
	int getCount() const ;
	ISpaceMarine *getUnit(int N) const ;
	int push(ISpaceMarine *unit);
};

#endif