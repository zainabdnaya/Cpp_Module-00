/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:22:43 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/27 23:33:32 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream, std::stringbuf


int main()
{
    // char s[10];

    // std::cout << "Hello";
    // std::cin >> s;
    // std::cout << "Hello " << s << std::endl;
    // std::string nbr;
    // std::getline(std::cin, nbr);
    // stoi(nbr);
    // std::cout << nbr;
    // int number = 88;
    // int *pNumber = &number;   // Declare and assign the address of variable number to pointer pNumber (0x22ccec)
    // std::cout << pNumber <<  std::endl;  // Print the content of the pointer variable, which contain an address (0x22ccec)
    // std::cout << *pNumber << std::endl; // Print the value "pointed to" by the pointer, which is an int (88)
    // *pNumber = 99;            // Assign a value to where the pointer is pointed to, NOT to the pointer variable
    // std::cout << *pNumber << std::endl; // Print the new value "pointed to" by the pointer (99)
    // std::cout << number <<   std::endl;
    // stringstream::str

  std::stringstream ss;
  ss.str ("Example string");
  std::string s = ss.str();
  std::cout << ss.str() ;


    return 0;
}