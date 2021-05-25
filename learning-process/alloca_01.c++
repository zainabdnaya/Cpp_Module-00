/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloca_01.c++                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:20:37 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/25 14:26:30 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Student{
    private:
        std::string _login;
    public:
        Student(std::string login) : _login(login)
        {
            std::cout << "Student" << this->_login << "is born" << std::endl;
        }
        ~Student()
        {
            std::cout << "Student" << this->_login << "died" << std::endl;
        }
};

int main()
{
    Student bla = Student("bla");
    Student *puf = new Student("puf");

    delete puf;
    return (0);
}
