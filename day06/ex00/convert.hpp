/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 01:11:57 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/03 12:06:01 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <climits>
#include <cmath>
#include <iomanip>
#include <algorithm>

#define RESET "\033[0m"
#define BLUE "\033[34m" 
#define BOLDRED "\033[1m\033[31m"     
#define BOLDYELLOW "\033[1m\033[33m"
#define BOLDGREEN "\033[1m\033[32m"
#define BOLDBLUE "\033[1m\033[34m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDWHITE "\033[1m\033[37m"

#define print_h(X) (std::cout  <<  " char  : " << X << std::endl)
#define print_i(X) (std::cout  <<  " int   : " << X << std::endl)
#define print_f(X) (std::cout  <<  " float : " << X << std::endl)
#define print_d(X) (std::cout  <<  " double: " << X << std::endl)


class Convert
{
private:
    std::string val;
    char    V_char;
    int     V_int;
    float   V_float;
    double  V_double;
public:
    // Convert();
    Convert(std::string str);
    // Convert(Convert const &cpy);
    // Convert &operator=(Convert const &equal);
    // virtual ~Convert();
    bool type(std::string str);

    int _F_pseudo(std::string str);
    int _D_pseudo(std::string str);

    int _D_type(std::string str);
    int _F_type(std::string str);
    int _I_type(std::string str);

    void _char(double cnv);
    void _int(double cnv);
    void _float(double cnv);
    void _double(double cnv);

};

// void    print_all(char c, int i , float f, double d);
#endif