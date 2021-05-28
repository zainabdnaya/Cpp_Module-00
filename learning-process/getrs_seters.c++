/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getrs_seters.c++                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:20:12 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/05/28 11:25:59 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Employee
{
private:
    // Private attribute
    int salary;

public:
    // Setter
    void setSalary(int s);
    // Getter
    int getSalary();
};

void Employee::setSalary(int s)
{
    this->salary = s;
}

int Employee::getSalary()
{
    return (this->salary);
}

int main()
{
    Employee myObj;
    myObj.setSalary(200);
    std::cout << myObj.getSalary();
    return 0;
}