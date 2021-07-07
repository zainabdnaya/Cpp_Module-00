/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:01:13 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/07 12:19:37 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>

template <typename T>
void easyfind(T container, int i)
{
    for (int j = 0 ; j <  container.size() ;j++)
    {
        if (i == container.at(j))
        {
            std::cout << "The element does exist and it's: " << i << std::endl;
            return;
        }
    }
    throw std::exception();
}

#endif