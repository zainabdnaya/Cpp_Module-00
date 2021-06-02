/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:06:05 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/02 16:18:16 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP 
#define FIXED_HPP
#include <iostream>
#include <string>

#define RESET "\033[0m"
#define MAGENTA "\033[35m" 
#define CYAN "\033[36m" 
#define YELLOW "\033[33m"

class Fixed{
    private:
        int p_fixed;
        static const int f_bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &copy);
        Fixed &operator=(Fixed const &equal);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};
#endif