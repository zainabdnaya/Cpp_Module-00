/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:50:07 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/29 10:21:25 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include "Form.hpp"
#include "cstring"
#include <istream>

class RobotomyRequestForm : public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &cpy);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &equal);
    // static std::string get_target()
    // {
    //         return(target);
    // }
    void Action() const;
    static void    random(std::string target);
    class  Failed : public std::exception
    {
        virtual const char *what() const throw();
    };
};

#endif
