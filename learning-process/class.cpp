/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:39:20 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/22 14:26:02 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

//Bla::Bla(int p1,float p2,char p3): a(p1),b(p2),c(p3){ // initiLISATIN des list d'atribues

Bla::Bla(void){ 
    this->foo = 5; // this pointeur ,pinter sur instance courant
    std::cout <<  "foo: : "<<this->foo << std::endl;
    this->_foo = 4;
    std::cout << "_foo: : " << this->_foo << std::endl;

    this->tes();
    
    this->_tes();
    return;
}

Bla::~Bla(void){
    std::cout << "destrutor" << std::endl;
    return;
}

void Bla::tes(void) const{
    std::cout << "I m public" << std::endl;
    return;
}

void Bla::_tes(void) const
{
    std::cout << "I m private" << std::endl;
    return;
}