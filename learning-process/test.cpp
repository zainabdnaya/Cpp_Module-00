/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:22:43 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/24 13:10:56 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



int main()
{
    char s[10];

    // std::cout << "Hello";
    // std::cin >> s;
    // std::cout << "Hello " << s << std::endl;
    std::string nbr;
    std::getline(std::cin, nbr);
    stoi(nbr);
    std::cout << nbr;

    return 0;
}