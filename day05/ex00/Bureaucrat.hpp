/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 22:12:14 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/29 20:12:03 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>

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

  class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat);
#endif