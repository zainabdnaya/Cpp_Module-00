/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:52:09 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/27 12:07:52 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void Contact::syntax_print(std::string str)
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

void Contact::print(Contact *con, int i)
{
    int j = 0;

    while (j < i)
    {
        std::cout << std::to_string(j) << std::setw(10);
        Contact
    ::syntax_print(con[j].first_name);
        Contact
    ::syntax_print(con[j].last_name);
        Contact
    ::syntax_print(con[j].nickname);
        std::cout << std::endl;
        j++;
    }
}

void Contact::add_(Contact *list, int index)
{
    Contact c;
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