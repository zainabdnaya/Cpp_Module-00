/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 01:58:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/03 13:00:27 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

// Convert::Convert()
// {
// 	this->val = "" ;
// 	this->V_char = '\0';
// 	this->V_int = 0;
// 	this->V_float = 0.0f;
// 	this->V_double = 0.0;
// }
Convert::Convert(std::string str)
{
	val = str;
	bool b = Convert::type(val);
	if (b == true)
	{
		std::cout << "hello!";
	}
	else
	{
		std::string str = "Impossible\n";
		print_h(str);
		print_i(str);
		print_f(str);
		print_d(str);
	}
}

bool Convert::type(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
	{
		std::cout << "1";

		// V_char = str[0];
		// V_int = static_cast<int>(this->V_char);
		// V_float = static_cast<float>(this->V_char);
		// V_double = static_cast<double>(this->V_char);
		return (true);
	}
	else if (Convert::_I_type(str) == 1)
	{
		std::cout << "2";

		// V_int = std::stoi(str);
		// V_char = static_cast<char>(this->V_int);
		// V_float = static_cast<float>(this->V_int);
		// V_double = static_cast<double>(this->V_int);
		return (true);
	}
	else if (Convert::_F_type(str) == 1 || Convert::_F_pseudo(str) == 1)
	{
		std::cout << "3";
		// V_float = std::stof(str);
		// V_int = static_cast<int>(this->V_float);
		// V_char = static_cast<char>(this->V_float);
		// V_double = static_cast<double>(this->V_float);
		return (true);
	}
	else if (Convert::_D_type(str) == 1 || Convert::_D_pseudo(str) == 1)
	{
		std::cout << "4";
		// V_double = std::stod(str);
		// V_int = static_cast<int>(this->V_double);
		// V_char = static_cast<char>(this->V_double);
		// V_float = static_cast<double>(this->V_double);
		return (true);
	}
	else
		return (false);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		Convert Convert(av[1]);
	}
	else if (ac < 2 || ac > 2)
		std::cout << BOLDRED << "You can only put 2 argument!\n"
				  << RESET;
	return (0);
}
