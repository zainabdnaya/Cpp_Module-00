/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:08:25 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/22 14:05:25 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"

int main(){

    Bla instance;

    instance.foo = 42;

    std::cout << "foo : " << instance.foo << std::endl;
    
    // instance.tes();
    // instance.tes();
    return 0;  
}