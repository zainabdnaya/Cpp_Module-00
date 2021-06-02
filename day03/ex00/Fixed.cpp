/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:50:10 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/02 16:18:36 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : p_fixed(0)
{
    std::cout <<  MAGENTA << "Calling Constructor " <<  RESET <<std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    this->p_fixed = copy.p_fixed;
    std::cout << YELLOW <<"Calling Copy Contructor " << RESET <<std::endl;
}

Fixed &Fixed::operator=(Fixed const &equal)
{
    if (this != &equal)
    {
        this->p_fixed = getRawBits();
    }
    std::cout << CYAN<< "Calling Assignement Operator!" << RESET <<std::endl;

    return (*this);
}
void Fixed::setRawBits(int const raws)
{
    std::cout << "Calling SetRwaBits" << std::endl;

    this->p_fixed = raws;
}

int Fixed::getRawBits(void) const
{
    std::cout << "Calling GetRawBits" << std::endl;
    return (this->p_fixed);
}

Fixed::~Fixed()
{
    std::cout <<   MAGENTA <<"Calling Destructor" <<  RESET <<  std::endl;
}