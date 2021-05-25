/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 18:19:24 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/25 18:39:23 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
    std::string *panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete  panther;
    std::cout << "freeing Memory!"<< std::endl;
}

int main()
{
    memoryLeak();
}
