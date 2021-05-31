/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:07:03 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/31 11:44:24 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
private:
    std::string name;

public:
    Pony(std::string name);
    static void ponyOnTheHeap();
    static void ponyOnTheStack();
    ~Pony();
};
#endif