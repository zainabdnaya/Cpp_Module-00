/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 01:58:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/03 16:44:16 by zdnaya           ###   ########.fr       */
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
		if (V_int > 0 && V_int < 127 && isprint(V_char))
			print_h(V_char);
		else if (V_int < 0 || V_int >= 127)
		{
			imposs();
		}
		else if (!isprint(V_char))
			non_disp();
		if (_F_pseudo(str) || _D_pseudo(str) || INT_MAX < V_int || INT_MIN  > V_int)
			print_i("Impossible");
		else
			print_i(V_int);
		print_f(V_float);
		print_d(V_double);
	}
	else
	{
		std::string str = "Impossible";
		imposs();
		print_i(str);
		fimpossible();
		print_d(str);
	}
}

bool Convert::type(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
	{
		V_char = str[0];
		V_int = static_cast<long>(this->V_char);
		V_float = static_cast<float>(this->V_char);
		V_double = static_cast<double>(this->V_char);
		return (true);
	}
	else if (Convert::_I_type(str) == 1)
	{
		V_int = std::stol(str);
		V_char = static_cast<char>(this->V_int);
		V_float = static_cast<float>(this->V_int);
		V_double = static_cast<double>(this->V_int);
		return (true);
	}
	else if (Convert::_F_type(str) == 1 || Convert::_F_pseudo(str) == 1)
	{
		V_float = std::stof(str);
		V_int = static_cast<long>(this->V_float);
		V_char = static_cast<char>(this->V_float);
		V_double = static_cast<double>(this->V_float);
		return (true);
	}
	else if (Convert::_D_type(str) == 1 || Convert::_D_pseudo(str) == 1)
	{
		V_double = std::stod(str);
		V_int = static_cast<long>(this->V_double);
		V_char = static_cast<char>(this->V_double);
		V_float = static_cast<double>(this->V_double);
		return (true);
	}
	else
		return (false);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			Convert Convert(av[1]);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else if (ac < 2 || ac > 2)
		std::cout << BOLDRED << "You can only put 2 argument!\n"
				  << RESET;
	return (0);
}
