/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:46:13 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 19:31:41 by zdnaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{    
}

Intern::Intern(Intern const &cpy)
{
    *this = cpy;
    return;
}


Intern &Intern::operator=(Intern const &equal)
{
    (void)equal;
    return (*this);
}

Form    *Intern::_shrubbery(std::string const &target) {
	return (new ShrubberyCreationForm(target));
}
Form    *Intern::_roboto(std::string const &target) {
	return (new RobotomyRequestForm(target));
}
Form    *Intern::_presidential(std::string const &target) {
	return (new PresidentialPardonForm(target));
}

Form    *Intern::makeForm(std::string name, std::string target)
{
	std::string cases[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form *form[3] = {Intern::_roboto(target), Intern::_presidential(target), Intern::_shrubbery(target),};
    
    for(int i = 0; i < 3 ; i++)
    {
		if (cases[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (form[i]);
		}
	}
    throw InTernError();
	return nullptr;
}

const char *Intern::InTernError::what() const throw()
{
    return (" There is an Error in your form request \n");
}


Intern::~Intern()
{ 
}