/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 08:39:19 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/05/28 08:45:54 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iomanip>
#include <string>
#include <sstream>

class Weapon{
    private:
    std::string type;
    public:
    void                setType(std::string str);
    const std::string&  getType();
}


#endif