/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 12:04:27 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 12:05:02 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : virtual public Enemy
{
private:
public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(SuperMutant const &cpy);
	SuperMutant &operator=(SuperMutant const &equal);
	void takeDamage(int);
};

#endif