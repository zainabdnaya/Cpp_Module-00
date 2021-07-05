/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 08:30:02 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/05 12:26:39 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iomanip>
#include <iostream>
#include <string>

template <typename T>
void print(T element)
{
    std::cout << element << std::endl;
}

template <typename T>
void iter(T *arr, unsigned int len, void (func)(T ))
{
    for (unsigned int i = 0; i < len; i++)
        func(arr[i]);
}


#endif
