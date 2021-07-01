/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:39:09 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 20:09:30 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <cstring>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    bool sign;
    std::string const name;
    int const signing;
    int const execution;
public:
    Form();
    Form(std::string const name, int const signing, int const execution);
    virtual ~Form();
    Form(Form const &cpy);
    Form &operator=(Form const &equal);

    std::string const getName() const;
    int  getExec() const;
    int  getSign() const;    
    bool getsigne() const;

    void BeSigned(Bureaucrat &bur);
    
    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };    
};

std::ostream &operator<<(std::ostream &output, Form const &bureaucrat);

#endif