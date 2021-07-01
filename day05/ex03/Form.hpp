/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:39:09 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 14:02:24 by zainabdnaya      ###   ########.fr       */
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

    std::string const getName()const;
    int  getExec() const;
    int  getSign() const;    
    bool getsigne() const;

    void BeSigned(Bureaucrat bur);
    
    void execute(Bureaucrat const & executor) const;
    
    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };   
    virtual void Action() const = 0;
};

std::ostream &operator<<(std::ostream &output, Form const &bureaucrat);

#endif