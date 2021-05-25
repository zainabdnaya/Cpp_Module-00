/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloca_01.c++                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:20:37 by zdnaya            #+#    #+#             */
/*   Updated: 2021/05/25 14:35:32 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Student{
    private:
        std::string _login;
    public:
        Student() : _login("bka")
        {
            std::cout << "Student " << this->_login << " is born" << std::endl;
        }
        ~Student()
        {
            std::cout << "Student " << this->_login << " died" << std::endl;
        }
};

int main()
{
    // Student bla = Student("bla");
    // Student *puf = new Student("puf");
    Student* students = new Student[13];

    delete [] students;
    return (0);
}
