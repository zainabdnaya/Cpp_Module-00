/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:42:06 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/28 22:09:25 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    sign = false;
}

Form::~Form()
{
}

Form::Form(std::string const name, int const signing, int const execution) : name(name), signing(signing), execution(execution), sign(false)
{
    if (execution < 1 || signing < 1)
        throw GradeTooHighException();
    else if (execution > 150 || signing > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &cpy)
{
    sign = cpy.signing;
}

Form &Form::operator=(Form const &equal)
{
    sign = equal.signing;
    return (*this);
}

void Form::BeSigned(Bureaucrat &bur)
{
    if (signing < bur.getGrade())
    {
        std::cout << bur.getName() << " signs " << getName();
        sign = true;
    }
    else
    {
        std::cout << bur.getName() << " can't sign " << getName() <<  "because garde too low" ;
    }
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too Hight Exception";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

std::string const Form::getName()
{
    return (this->name);
}

std::ostream &operator<<(std::ostream &output, Form const &form)
{
    (void)(form);
    output << "Let's sign the Form" ;
    return output;
}
