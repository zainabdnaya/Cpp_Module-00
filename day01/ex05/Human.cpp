/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:41:11 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/05/28 09:52:58 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string     Human::identify()
{
    return (this->brain.identify());
}

Brain   Human::getBrain()
{
    return (this->brain);
}

