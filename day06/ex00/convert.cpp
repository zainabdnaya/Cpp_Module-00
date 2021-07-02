/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 01:58:51 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/02 11:14:11 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert(std::string str)
{
    this->val = str;
    
    double cnv = std::stod(this->val);
    std::cout << "char: ";
	    Conver._char(cnv);
    std::cout << "int: ";
	    Convert._int(cnv);
    std::cout << "float: ";
	    Convert._float(cnv);
	std::cout << "double: ";
	    Convert._double(cnv);
    
}

void	Convert::_char(double cnv)
{
    if (std::isnan(cnv))
		std::cout << "impossible\n" ;
	else
		std::cout << static_cast<char>(cnv)) << std::endl;
}

 void	Convert::_int(double cnv)
{
    if (std::isnan(cnv))
		std::cout << "impossible\n" ;
	else
		std::cout << static_cast<int>(cnv)) << std::endl;
}


 void	Convert::_float(double cnv)
{
    if (std::isnan(cnv))
		std::cout << "impossible\n" ;
	else
		std::cout << static_cast<float>(cnv)) << std::endl;
}

 void	Convert::_float(double cnv)
{

	std::cout << cnv << std::endl;
}

int	 main(int ac, char **av)
{
	if (ac == 2)
		Convert convert(av[1]);
	return (0);
}
