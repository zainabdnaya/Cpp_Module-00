/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 12:11:17 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/22 13:37:28 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;
    char c;

    i = 0;
    j = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while (argv[i] != NULL)
        {
            c = '\0';
            j = 0;
            while (argv[i][j])
            {
                c = '\0';
                if (argv[i][j] >= 97 && argv[i][j] <= 122)
                {
                    c = argv[i][j] - 32;
                    std::cout << c;
                }
                else
                    std::cout << argv[i][j];
                j++;
            }
            if (argv[i + 1])
                std::cout << " ";
            i++;
        }
    }
    return (1);
}