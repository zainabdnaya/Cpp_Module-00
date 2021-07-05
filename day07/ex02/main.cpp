/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:00:19 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/05 18:52:40 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "array.hpp"

#define MAX_VAL 750
int main(int, char **)
{
    Array<int> numbers(MAX_VAL);

    int *mirror = new int[MAX_VAL];
    srand(time(NULL));

    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    Array<int> tmp = numbers;
    Array<int> test(tmp);
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        std::cout << numbers[25] << std::endl;
        std::cout << test[25] << std::endl;
        numbers[-2];
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete[] mirror; 
    return 0;
}