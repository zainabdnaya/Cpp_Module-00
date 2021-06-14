/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:27:28 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/14 19:43:38 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Victim 
{
    protected:
        std::string name;
    public:
        Victim();
        ~Victim();
        Victim(std::string name);
        Victim(Victim const &cpy);
        virtual void getPolymorphed() const;
        Victim &operator=(Victim const &equal);
};

#endif