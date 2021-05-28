/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:49:58 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/05/28 14:56:29 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::stringstream   buffer;

    buffer << this;
    this->neurons = buffer.str();
}

std::string Brain::identify()
{
  
    return(this->neurons);
}