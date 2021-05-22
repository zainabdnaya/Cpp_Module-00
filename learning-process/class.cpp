/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:39:20 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/22 15:10:05 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

//Bla::Bla(int p1,float p2,char p3): a(p1),b(p2),c(p3){ // initiLISATIN des list d'atribues

Bla::Bla(void){
    std::cout << "construtor" << std::endl;

    // this->foo = 5; // this pointeur ,pinter sur instance courant
    // std::cout <<  "foo: : "<<this->foo << std::endl;
    this->_foo = 4;
    // std::cout << "_foo: : " << this->_foo << std::endl;
    // this->tes();
    
    // this->_tes();
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

int Bla::getbla(void) const{
    return (this->_foo);
}

void Bla::setbla(int v){
    if ( v >= 0)
        this->_foo = v;
    return;
}

int Bla::comapre(Bla *blaa)const{
    if ( this->_foo < blaa->getbla())
        return (-1);
    else if ( this->_foo > blaa->getbl())
        return (1);
    return (0);
}