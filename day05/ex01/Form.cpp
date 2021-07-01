/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:42:06 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 13:51:17 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : signing(0) , execution(0)
{
}

Form::Form(std::string const name, int const signing, int const execution) : name(name), signing(signing), execution(execution)
{
    sign = false;
    if (execution < 1 || signing < 1)
        throw GradeTooHighException();
    else if (execution > 150 || signing > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &cpy) : name(cpy.name) , signing(cpy.signing)  , execution(cpy.execution)
{
    sign = cpy.sign;
}

Form &Form::operator=(Form const &equal)
{
    if ( this != &equal)
     sign = equal.sign;
    return (*this);
}

void Form::BeSigned(Bureaucrat &bur)
{
    if (bur.getGrade() <= getSign())
        sign = true;
    else
       throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too Hight Exception";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

std::string const Form::getName() const
{
    return (this->name);
}

int  Form::getExec() const
{
    return (this->execution);
}
int  Form::getSign() const
{
    return (this->signing);
}

bool Form::getsigne() const
{
    return (this->sign);
}

std::ostream &operator<<(std::ostream &output, Form const &form)
{
    if ( form.getsigne() == true)
        output << "The bereaucrat can  sign  " << form.getName()  << std::endl;
    else
        output << "The bereaucrat can't sign " << form.getName() << std::endl;
    return output;
}

Form::~Form()
{
}