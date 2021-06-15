/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:42:44 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/15 09:38:31 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"
#include <iomanip>

class Sorcerer{
     private:
         std::string name;
         std::string title;
    public:
        ~Sorcerer();
        Sorcerer(std::string name,std::string title);
        std::string const &get_name(void) const;
        std::string const &get_title(void) const;
        Sorcerer(Sorcerer const &cpy);
        void polymorph(Victim const &) const;
        Sorcerer &operator=(Sorcerer const &equal);
};

std::ostream &operator<<(std::ostream &output, Sorcerer const &sorc);

#endif