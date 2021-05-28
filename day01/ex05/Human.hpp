/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 09:51:33 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/28 09:58:00 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include <iomanip>
#include <string>
#include <sstream>
#include <iostream>
#include "Brain.hpp"

class Human
{
private:
    Brain brain;
public:
    Brain getBrain();
    std::string identify();
};

#endif