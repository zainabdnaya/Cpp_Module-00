/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 01:11:57 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/02 11:14:38 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CONVERT_HPP
#ifndef CONVERT_HPP

#include <iostrram>
#include <string>
#include <sstream>
#include <climits>
#include <cmath>
#include <iomanip>

class Convert
{
private:
    std::string val;
public:
    Convert(std::string str);
    void _char(double cnv);
    void _int(double cnv);
    void _float(double cnv);
    void _double(double cnv);
};

#endif