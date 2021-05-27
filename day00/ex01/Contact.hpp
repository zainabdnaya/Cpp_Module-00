/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:31:26 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/27 12:08:27 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_HPP
#define Contact_HPP
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

class Contact
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
     Contact(void);
    ~Contact(void);
    void add_(Contact *list, int index);
    void print(Contact *con, int i);
    void print_all(Contact *co, int i);
    void syntax_print(std::string str);
};

#endif