/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 01:11:57 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/03 18:14:17 by zdnaya           ###   ########.fr       */
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
#define BOLDRED "\033[1m\033[31m"     

#define print_h(X) (std::cout  <<  " char  : " << "'" << X << "'" << std::endl)
#define print_i(X) (std::cout  <<  " int   : " << X << std::endl)
#define non_disp() (std::cout  << BOLDRED <<  " char  : Non dispalyabe"   << RESET<< std::endl)
#define imposs()   (std::cout  << BOLDRED <<  " char  : Impossible"       << RESET<< std::endl)
#define print_f(X) (std::cout << std::fixed << std::setprecision(2)  <<  " float : " << X <<  "f" << std::endl)
#define fimpossible(X) (std::cout << std::fixed << std::setprecision(2)  <<  " float : " << "impossible" <<  "" << std::endl)
#define print_d(X) (std::cout << std::fixed << std::setprecision(2)  <<  " double: " << X << std::endl)

class Convert
{
private:
    std::string val;
    char    V_char;
    long  int     V_int;
    float   V_float;
    double  V_double;
public:
    Convert();
    Convert(std::string str);
    Convert(Convert const &cpy);
    Convert &operator=(Convert const &equal);
    virtual ~Convert();

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


#endif