/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zainabdnayagmail.com <zainabdnayagmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:29:01 by zainabdnaya       #+#    #+#             */
/*   Updated: 2021/06/30 15:32:20 by zainabdnaya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
    target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : Form(cpy)
{
    this->target = cpy.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &equal)
{
    if ( this != &equal)
        this->target = equal.target;
    return *this;
}


void ShrubberyCreationForm::Action() const
{
    std::ofstream filebuf(target + "_shrubbery");
    filebuf <<"          .     .  .      +     .      .          ." << std::endl;
    filebuf <<"     .       .      .     #       .           ." << std::endl;
    filebuf <<"        .      .         ###            .      .      ."<< std:: endl;
    filebuf <<"      .      .   \"#:. .:##\"##:. .:#\"  .      .\"" << std::endl;
    filebuf <<"          .      . \"####\"###\"####\"  ." << std::endl;
    filebuf << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ."<< std::endl;
    filebuf << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ."<< std::endl;
    filebuf << "  .             \"#########\"#########\"        .        ."<< std::endl;
    filebuf << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;;
    filebuf << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
    filebuf << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
    filebuf << "      .     \"#######\"##\"#####\"##\"#######\"      .     ."<< std::endl;
    filebuf << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
    filebuf << "            .     \"      000      \"    .     ." << std::endl;
    filebuf << "       .         .   .   000     .        .       ."<< std::endl;
    filebuf << ".. .. ..................O000O........................ ......" << std::endl;
    filebuf.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}