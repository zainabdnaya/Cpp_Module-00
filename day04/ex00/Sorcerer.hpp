/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 12:42:44 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/25 19:15:35 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"
#include <iomanip>

class Sorcerer{
     private:
         std::string name;
         std::string title;
    public:
       virtual  ~Sorcerer();
        Sorcerer(std::string name,std::string title);
        std::string const &get_name(void) const;
        std::string const &get_title(void) const;
        Sorcerer(Sorcerer const &cpy);
        void polymorph(Victim const &) const;
        void polymorph(Peon const &sorc) const;
        Sorcerer &operator=(Sorcerer const &equal);
};

std::ostream &operator<<(std::ostream &output, Sorcerer const &sorc);

#endif