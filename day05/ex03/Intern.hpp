/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:46:12 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 17:41:34 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
class Form;

class Intern
{
private:
public:
    Intern();
    virtual ~Intern();
    Intern(Intern const& cpy);
    Intern& operator=(Intern const& equal);

	Form*	_shrubbery(std::string const &target);
	Form*	_roboto(std::string const &target);
	Form*	_presidential(std::string const &target);
    Form	*makeForm(std::string name, std::string target);
    class InTernError : public std::exception
    {
        virtual const char* what() const throw();
    };
    
};

#endif