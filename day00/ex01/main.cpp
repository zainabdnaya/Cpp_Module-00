/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:35:04 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/23 18:40:17 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_book.hpp"

void contact::print_all(contact *co, int i)
{
    std::cout << " First Name : " + co[i].first_name << std::endl;
    std::cout << " Last name  : " + co[i].last_name << std::endl;
    // std::cout << " Nickname :" + co[i].nickname << std::endl;
    // std::cout << " Login :" + co[i].login << std::endl;
    // std::cout << " Postal adress :" + co[i].postal << std::endl;
    // std::cout << " Phone number :" + co[i].phone << std ::endl;
    // std::cout << " Birthday date :" + co[i].birth << std::endl;
    // std::cout << " Favorite meal :" + co[i].fv_meal << std::endl;
    // std::cout << " Underwear color " + co[i].under_w << std::endl;
    // std::cout << " Darkest secret :" + co[i].secret << std::endl;
}

int in_range(int k, int i)
{
    int m;

    m = 0;
    if (k < 0 || k >= 8)
        return (0);
    while (m < i)
    {
        if (k != i)
            m++;
        else
            return (1);
    }
    return (0);
}

int main()
{
    contact Contact[8];
    std::string str;
    int k;
    int i;

    i = 0;
    k = 0;
    std::cout << "Welcome to your crappy phone_book:" << std::endl;
    while (1)
    {
        std::cout << "Phon_Book:";
        std::getline(std::cin, str);
        if (str == "ADD")
        {
            if (i >= 8)
            {
                std::cout << "Contact Full!" << std::endl;
                continue;
            }
            Contact->add_(Contact, i);
            i++;
        }
        if (str == "SEARCH")
        {
            Contact->print(Contact, i);
            std::cout << "You May enter an Index for more Details:";
            std::getline(std::cin, str);
            if (in_range(stoi(str), i) == 0)
                    std::cout << "Index Not Found!" << std::endl;
            else 
                Contact->print_all(Contact, stoi(str));
            std::getline(std::cin, str);
        }
        if (str == "EXIT")
        {
            std::cout << "\t\tEXIT !";
            break;
        }
    }
}