/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 12:22:36 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/04 12:27:10 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
#define CLASS_HPP
#include  <iostream>
#include <string>
#include <ctime>
#include <iomanip>
class Base {
    private:

    public:
        virtual ~Base();
};


class A : public Base{
};

class B : public Base{
};

class C : public Base{
};

Base * generate(void);

void identify(Base* p);

void identify(Base& p);

#endif