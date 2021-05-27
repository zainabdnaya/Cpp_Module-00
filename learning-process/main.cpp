/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:08:25 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/27 23:20:39 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

std::string my_strcat(char x, char y)
{
    std::string result;

    result = (std::to_string)((x) + (y));

    return (result);
}
int main()
{

    // Bla instance;

    // instance.setbla(-42);
    // std::cout << "foo : " << instance.getbla() << std::endl;
    // instance.setbla(42);
    // std::cout << "foo : " << instance.getbla() << std::endl;

    /*std::string test;
    srand(time(0));
    int j = 0;
    int k = 0;
    for (int i = 0; i < 127; i++)
    {
        j = rand() % 127;
        if ((j >= 65 && j < 90) || (j >= 95 && j < 122))
        {
            test += (char)j;
            k++;
        }
        if (k == 6)
            break;
    }
    // test = "a";
    // test += "b";
    std::cout <<  test << std::endl;*/
    
    std::string mystr = "32SDKJ32";
    int myInt;
    std::stringstream (mystr)>>myInt;
    std::cout << myInt << std::endl;

    return 0;
}