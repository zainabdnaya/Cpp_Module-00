/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:27:28 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/25 19:15:50 by zainabdnaya      ###   ########.fr       */
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
        virtual ~Victim();
        Victim(std::string name);
        Victim(Victim const &cpy);
        virtual void getPolymorphed() const;
        Victim &operator=(Victim const &equal);
        std::string const &get_name(void) const;
};

std::ostream &operator<<(std::ostream &out, Victim const &vic);

#endif