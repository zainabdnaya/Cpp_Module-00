/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:33:07 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 17:57:49 by zainabdnaya      ###   ########.fr       */
=======
/*   By: zdnaya <zdnaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:33:07 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 20:24:32 by zdnaya           ###   ########.fr       */
>>>>>>> b8be971bd585b115abc2dc2afd501df1f45510fa
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Form *rrf;
    Form *ppf;
<<<<<<< HEAD
    Form *scf;
=======
    Form *scf = NULL;
>>>>>>> b8be971bd585b115abc2dc2afd501df1f45510fa
    Bureaucrat a("a", 10);
    Bureaucrat b("b", 23);
    Bureaucrat c("c", 64);

    try
    {
        rrf = someRandomIntern.makeForm("robotomy request", "a");
<<<<<<< HEAD
        a.signForm(*rrf);
        a.executeForm(*rrf);
        rrf->Action();
        std::cout << "••••••••••••••••••••••••••••••••••••••••••••••••••••••\n";
        ppf = someRandomIntern.makeForm("presidential pardon", "a");
        b.signForm(*ppf);
        b.executeForm(*ppf);
        ppf->Action();
        std::cout << "••••••••••••••••••••••••••••••••••••••••••••••••••••••\n";
        scf = someRandomIntern.makeForm("shrubbery creation", "a");
        c.signForm(*scf);
        c.executeForm(*scf);
        scf->Action();
=======
        // a.signForm(*rrf);
        // a.executeForm(*rrf);
        // rrf->Action();
        std::cout << "••••••••••••••••••••••••••••••••••••••••••••••••••••••\n";
        ppf = someRandomIntern.makeForm("presidential pardon", "a");
        // b.signForm(*ppf);
        // b.executeForm(*ppf);
        // ppf->Action();
        std::cout << "••••••••••••••••••••••••••••••••••••••••••••••••••••••\n";
        scf = someRandomIntern.makeForm("shrubbery creation", "a");
        // c.signForm(*scf);
        // c.executeForm(*scf);
        // scf->Action();
>>>>>>> b8be971bd585b115abc2dc2afd501df1f45510fa
        delete rrf;
        delete ppf;
        delete scf;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what();
    }
    return 0;
}