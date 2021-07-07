/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:01:13 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/07 15:01:22 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <vector>

template <typename T>
void easyfind(T container, int i)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), i);
    if (it != container.end())
    {
        std::cout << "The element does exist and it's: " << i << std::endl;
        return;
    }
    else
        throw std::exception();
}

#endif