/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:33:32 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/27 14:44:29 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *str2 = &str;
    std::string &ref = str;

    std::cout << *str2 << std::endl;
    std::cout << ref << std::endl;
}