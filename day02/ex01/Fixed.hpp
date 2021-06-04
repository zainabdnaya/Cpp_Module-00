/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:01:33 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/04 14:18:23 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <istream>
#include <string>
#include <iostream>
#include <cmath>
#define RESET "\033[0m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define YELLOW "\033[33m"

class Fixed
{
private:
    int p_fixed;
    static const int f_bits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const int num);
    Fixed(const float p_float);
    Fixed(Fixed const &copy);
    Fixed &operator=(Fixed const &equal);
    float toFloat(void) const;
    int toInt(void) const;
};
std::ostream &operator<<(std::ostream &os, Fixed const &fixed);
#endif