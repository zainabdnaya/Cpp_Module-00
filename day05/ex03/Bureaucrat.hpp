/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 22:12:14 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/29 21:38:30 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
    std::string const name;
    int grade;
    Bureaucrat();

public:
    Bureaucrat(std::string const &name, int grade);
    virtual ~Bureaucrat();
    Bureaucrat(Bureaucrat const &bur);
    Bureaucrat &operator=(Bureaucrat const &equal);
    int getGrade() const;
    std::string const getName() const;
    void incr_Grade();
    void decr_Grade();
    void signForm(Form &f);
    
    void executeForm(Form const & form);
    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class Failed_exec : public std::exception
    {
        virtual const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat);
#endif