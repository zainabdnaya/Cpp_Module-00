/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:46:12 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 20:32:37 by zdnaya           ###   ########.fr       */
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