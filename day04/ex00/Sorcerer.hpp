/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:42:44 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/14 15:19:07 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include <cstring>


class Sorcerer{
     private:
         std::string name;
         std::string title;
    public:
        Sorcerer();
        Sorcerer(Sorcerer const &cpy);
        Sorcerer &operator(Sorcerer const &equal);
        ~Sorcerer();
};

#endif