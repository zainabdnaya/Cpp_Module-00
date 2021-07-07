/* ************************************************************************** */
/*                                                                            */
/*              ß                                          :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:02:14 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/07 12:02:15 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> numbers;

    for (int i = 1; i <= 10; i++)
        numbers.push_back(i);

    try
    {
        easyfind(numbers, 5);
        easyfind(numbers, 11);
    }
    catch (std::exception)
    {
        std::cout << "Error: The wanted element does not exist!" << std::endl;
    }
}