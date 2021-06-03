/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:09:41 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/03 17:55:19 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : p_fixed(0)
{
    std::cout << MAGENTA << "Calling Default Constructor " << RESET << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    this->p_fixed = copy.p_fixed;
    std::cout << YELLOW << "Calling Copy Contructor " << RESET << std::endl;
}

Fixed::Fixed(const int num)
{
    this->p_fixed =  num << this->f_bits;
    std::cout << MAGENTA << "Calling Integer Constructor" << RESET << std::endl;
}

Fixed::Fixed(const float p_float)
{

    this->p_fixed = (int)(roundf(p_float * (1 << this->f_bits)));
    std::cout << MAGENTA << "Calling Float Constructor" << RESET << std::endl;
}

Fixed &Fixed::operator=(Fixed const &equal)
{
    if (this != &equal)
    {
        this->p_fixed = equal.p_fixed;
    }
    std::cout << CYAN << "Calling Assignement Operator!" << RESET << std::endl;

    return (*this);
}

float Fixed::toFloat(void) const
{
    return (((float)this->p_fixed) / (1 << this->f_bits));
}

int Fixed::toInt(void) const
{
    return (this->p_fixed >> this->f_bits);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
    os << fixed.toFloat();
    return os;
}

Fixed::~Fixed()
{
    std::cout << MAGENTA << "Calling Destructor" << RESET << std::endl;
}