/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:17:51 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/09 12:11:38 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
#include "ClapTrap.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"         
#define GREEN "\033[32m"         
#define YELLOW "\033[33m"         
#define CYAN "\033[36m"

class FragTrap :virtual public ClapTrap
{
    private:

    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string str);
        FragTrap(FragTrap const &cpy);
        FragTrap	        &operator=(FragTrap const &equal);
        void vaulthunter_dot_exe(std::string const &target);
};

#endif