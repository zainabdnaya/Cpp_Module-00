/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:39:23 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/23 12:33:23 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
#define CLASS_HPP

#include <iostream>

class Bla
{

public:
    int foo;
    int a;
    float b;
    char c;
    Bla(void);
    ~Bla(void);
    int getbla(void) const;
    void setbla(int v);
    void tes(void) const;
    int comapre(Bla *blaa) const;

private:
    int _foo;

    void _tes(void) const;
};
struct test
{

    int foo;
    int a;
    float b;
    char c;
};

#endif