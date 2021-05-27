/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:18:47 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/05/27 23:57:52 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iomanip>
#include <string>
#include <sstream>

class Brain{
    private: 
        std::string neurons;
    public :
         Brain();
         std::string identify();
};



#endif