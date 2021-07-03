/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 08:53:31 by zdnaya            #+#    #+#             */
/*   Updated: 2021/07/03 12:59:19 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int Convert::_D_type(std::string str)
{
    int i;
    int d;

    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < (int)str.length())
    {
        if (str[i] == '.')
        {
            i++;
            d++;
            continue;
        }
        else if (isdigit(str[i]) == 0)
            return (0);
        i++;
    }
     if(d > 1)
        return(0);
    return (1);
}

int Convert::_F_type(std::string str)
{
    int i;
    int l;
    int f;

    f = 0;
    i = 0;
    l = str.length();
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (str[l - 1] != 'f')
        return(0);
    while (i < l - 1)
    {
        if (str[i] == '.')
        {
            i++;
            f++;
            continue;
        }
        if (!isdigit(str[i]))
             return(0); 
        i++;
    }
    if(f > 1)
        return(0);
    return (1);
}

int Convert::_I_type(std::string str)
{
    int i;
    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < str.length())
    {
        if (isdigit(str[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}

int Convert::_F_pseudo(std::string str)
{
    std::string cases[] = {"nanf", "inff", "-inff", "+inff"};
    for(int i = 0; i < 4 ; i++)
    {
        if ( str == cases[i])
            return(1);
    }
    return(0);
}

int Convert::_D_pseudo(std::string str)
{
    std::string cases[] = {"nan", "inf", "-inf", "+inf"};
    for(int i = 0; i < 4 ; i++)
    {
        if ( str == cases[i])
            return(1);
    }
    return(0);
}

