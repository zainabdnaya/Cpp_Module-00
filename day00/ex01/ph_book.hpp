/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph_book.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:31:26 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/23 18:58:20 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PH_BOOK
#define PH_BOOK
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstring>

class contact
{
private:
    int j;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal;
    std::string adress;
    std::string email_ad;
    std::string phone;
    std::string birth;
    std::string fv_meal;
    std::string under_w;
    std::string secret;

public:
    contact(void);
    ~contact(void);
    void add_(contact *list, int index);
    void affect();
    void print(contact *con, int i);
    void print_all(contact *co, int i);
};

#endif