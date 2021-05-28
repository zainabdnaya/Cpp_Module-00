/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringstream.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:02:40 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/05/28 11:16:29 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.hpp"
#include <sstream>

int main()
{
    std::ostringstream os;
    
    os << 15;
    std::cout<< "dec: " << os <<  std::endl;
    os << std::hex << std::endl;
    std::cout << "hex: "  << os<<  std::endl;
    std::cout << os.str() << std::endl;
}