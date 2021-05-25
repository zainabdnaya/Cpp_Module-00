/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:11:08 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/25 18:26:57 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
    Pony stack;
    
    stack.ponyOnTheStack();

    Pony *heap = new Pony;

    heap->ponyOnTheHeap();

    delete  heap;
}