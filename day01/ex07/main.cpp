/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:59:28 by zdnaya            #+#    #+#             */
/*   Updated: 2021/06/01 09:55:39 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstring>
#include <cctype>
#include <fstream>
#include <cstdlib>

int main()
{
    std::string file_name;
    std::string s1;
    std::string s2;
    std::string line;
    std::string str = "";

    std::cout << "Enter a FILENAME  :   ";
    std::getline(std::cin, file_name);
    if (file_name.empty())
    {
        std::cout << "Error: Pleas Enter non Empty Name!";
        exit(0);
    }
    std::ifstream my_file;
    my_file.open(file_name);
    if (!my_file.is_open())
    {
        std::cout << "Error: file not opened!";
        exit(0);
    }
    std::cout << "Enter non Empty string S1: (to_search in file): ";
    std::getline(std::cin, s1);
    std::cout << "Enter non Empty string S2: (to_replace in file): ";
    std::getline(std::cin, s2);
    if (s1.empty() || s2.empty())
    {
        std::cout << "Error: Pleas Enter non Empty strings!";
        exit(0);
    }
    while (!my_file.eof())
    {
        std::getline(my_file, line);
        while (line.find(s1) != std::string::npos)
            line = line.replace(line.find(s1), s1.length(), s2);
        str += line;
        str += "\n";
    }
    my_file.close();
    std::ofstream newfile;
    newfile.open(file_name + ".replace");
    newfile << str;
    newfile.close();
    return 0;
}