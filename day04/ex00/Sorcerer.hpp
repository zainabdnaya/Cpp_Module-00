/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:42:44 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/14 19:51:03 by zdnaya           ###   ########.fr       */
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
        std::string get_name(void);
        std::string get_title(void);
        Sorcerer(Sorcerer const &cpy);
        void polymorph(Victim const &) const;
        Sorcerer &operator=(Sorcerer const &equal);
};

std::ostream &operator<<(std::ostream &output, Sorcerer const &sorc);

#endif