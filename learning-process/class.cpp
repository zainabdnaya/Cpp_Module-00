/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:39:20 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/21 10:40:10 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

Bla::Bla(void){
    this->foo = 5; // this pointeur ,pinter sur instance courant
    std::cout <<  "constructor : "<<this->foo << std::endl;
    this->tes();
    return;
}

Bla::~Bla(void){
    std::cout << "destrutor" << std::endl;
    return;
}

void Bla::tes(void)
{
    std::cout << "function" << std::endl;
    return;
}