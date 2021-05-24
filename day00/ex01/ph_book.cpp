/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph_book.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:33:39 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/24 13:07:40 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_book.hpp"

contact::contact(void)
{
    j = 0;
    // first_name.empty();
    // last_name.empty();
    // nickname.empty();
    // login.empty();
    // postal.empty();
    // adress.empty();
    // email_ad.empty();
    // phone.empty();
    // birth.empty();
    // fv_meal.empty();
    // under_w.empty();
    // secret.empty();
}

contact::~contact(void)
{
    // std::cout << "\t\tThe End" << std::endl;
}

void contact::print(contact *con, int i)
{
    int j = 0;

    while (j < i)
    {
        std::cout << std::to_string(j) << std::setw(10);
        std::cout << "|" << std::setw(10);
        std::cout << con[j].first_name;
        std::cout << "|" << std::setw(10);
        std::cout << con[j].last_name;
        std::cout << std::endl;
        j++;
    }
}

void contact::add_(contact *list, int index)
{
    contact c;
    std::cout << " \t\tFirst Name : ";
    std::getline(std::cin, c.first_name);
    std::cout << " \t\tLast name  : ";
    std::getline(std::cin, c.last_name);
    list[index] = c;
}

void contact::affect()
{
    std::cout << "\nPleas Enter:" << std::endl;
    std::cout << " \t\tFirst Name : ";
    std::getline(std::cin, this->first_name);
    std::cout << " \t\tLast name  : ";
    std::getline(std::cin, this->last_name);
    // std::cout << " Nickname :";
    // std::getline(std::cin, this->nickname);
    // std::cout << " Login :";
    // std::getline(std::cin, this->login);
    // std::cout << " Postal adress :";
    // std::getline(std::cin, this->postal);
    // std::cout << " Phone number :";
    // std::getline(std::cin, this->phone);
    // std::cout << " Birthday date :";
    // std::getline(std::cin, this->birth);
    // std::cout << " Favorite meal :";
    // std::getline(std::cin, this->fv_meal);
    // std::cout << " Underwear color :";
    // std::getline(std::cin, this->under_w);
    // std::cout << " Darkest secret :";
    // std::getline(std::cin, this->secret);
    std::cout << "\n";
    // this->j++;
}

