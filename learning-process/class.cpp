/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:39:20 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/21 11:52:26 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

Bla::Bla(int p1,float p2,char p3): a(p1),b(p2),c(p3){ // initiLISATIN des list d'atribues
    this->foo = 5; // this pointeur ,pinter sur instance courant
    std::cout <<  "a: : "<<this->a << std::endl;
    std::cout <<  "b: : "<<this->b << std::endl;
    std::cout <<  "c: : "<<this->c << std::endl;
    // this->tes();
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