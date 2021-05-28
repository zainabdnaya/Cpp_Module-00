/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:49:58 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/05/28 08:35:24 by zainabdnaya      ###   ########.fr       */
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