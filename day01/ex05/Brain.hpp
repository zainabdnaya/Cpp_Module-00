/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:18:47 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/05/28 09:51:58 by zdnaya           ###   ########.fr       */
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