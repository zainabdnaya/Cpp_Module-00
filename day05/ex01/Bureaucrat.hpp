/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 22:12:14 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/28 20:52:53 by zainabdnaya      ###   ########.fr       */
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