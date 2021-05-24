/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph_book.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:31:26 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/24 16:38:43 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PH_BOOK
#define PH_BOOK
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstring>
#include <cctype>

#define RESET "\033[0m"
#define BLUE "\033[34m" 
#define BOLDRED "\033[1m\033[31m"     
#define BOLDYELLOW "\033[1m\033[33m"
#define BOLDGREEN "\033[1m\033[32m"
#define BOLDBLUE "\033[1m\033[34m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDWHITE "\033[1m\033[37m"

class contact
{
private:
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
    void print(contact *con, int i);
    void print_all(contact *co, int i);
    void syntax_print(std::string str);
};

#endif