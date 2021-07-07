/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:07:52 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/07/07 19:26:00 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "" << std::endl;
    std::cout << mstack.top() << std::endl;
    std::cout << "" << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << "" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "elemets are: " << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "" << std::endl;
    MutantStack<int> mystack1;
    mystack1.push(4);
    mystack1.push(3);
    mystack1.push(2);
    mystack1.push(1);
    MutantStack<int> mystack2;
    mystack2.push(9);
    mystack2.push(7);
    mystack2.push(5);
    mystack2.push(3);
    mystack1.swap(mystack2);
    MutantStack<int>::iterator it2 = mystack1.begin();
    MutantStack<int>::iterator ite2 = mystack1.end();
    while (it2 != ite2)
    {
        std::cout << "Stack1:\t" << *it2 << std::endl;
        ++it2;
    }
    std::cout << "" << std::endl;
    MutantStack<int>::iterator it3 = mystack2.begin();
    MutantStack<int>::iterator ite3 = mystack2.end();
    while (it3 != ite3)
    {
        std::cout << "Stack2:\t" << *it3 << std::endl;
        ++it3;
    }
    std::cout << "" << std::endl;
    return 0;
}