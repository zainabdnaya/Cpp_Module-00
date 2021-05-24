/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph_book.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:33:39 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/24 18:23:14 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_book.hpp"

contact::contact(void)
{
}

contact::~contact(void)
{
}

void contact::syntax_print(std::string str)
{
    if (((str.length()) > 10))
        std::cout << "|" << (std::setw(11));
    else
        std::cout << "|" << (std::setw(10));
    if ((str.length()) > 10)
        std::cout << str.substr(0, 10) + ".";
    else
        std::cout << str;
}

void contact::print(contact *con, int i)
{
    int j = 0;

    while (j < i)
    {
        std::cout << std::to_string(j) << std::setw(10);
        contact::syntax_print(con[j].first_name);
        contact::syntax_print(con[j].last_name);
        contact::syntax_print(con[j].nickname);
        std::cout << std::endl;
        j++;
    }
}

void contact::add_(contact *list, int index)
{
    contact c;
    std::cout << "\nPleas Enter:" << std::endl;
    std::cout << " \t\tFirst Name      : ";
    std::getline(std::cin, c.first_name);
    std::cout << " \t\tLast name       : ";
    std::getline(std::cin, c.last_name);
    std::cout << "\t\tNickname        :";
    std::getline(std::cin, c.nickname);
    std::cout << "\t\tLogin           :";
    std::getline(std::cin, c.login);
    std::cout << "\t\tPostal adress   :";
    std::getline(std::cin, c.postal);
    std::cout << "\t\tEmail           :";
    std::getline(std::cin, c.email_ad);
    std::cout << "\t\tPhone number    :";
    std::getline(std::cin, c.phone);
    std::cout << "\t\tBirthday date   :";
    std::getline(std::cin, c.birth);
    std::cout << "\t\tFavorite meal   :";
    std::getline(std::cin, c.fv_meal);
    std::cout << "\t\tUnderwear_color :";
    std::getline(std::cin, c.under_w);
    std::cout << "\t\tDarkest_secret  :";
    std::getline(std::cin, c.secret);
    list[index] = c;
}