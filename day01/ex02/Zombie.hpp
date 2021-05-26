/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:59:54 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/26 17:06:26 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdlib>

class Zombie
{

private:
    std::string name;
    std::string type;

public:
    Zombie();
    ~Zombie();
    void set_name(std::string name); 
    void set_type(std::string type);
    void announce();
};

#endif