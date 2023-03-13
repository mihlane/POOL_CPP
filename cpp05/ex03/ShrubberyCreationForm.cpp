/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:22:58 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 17:30:46 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm;

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src), target(src.getTarget())
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string const & ShrubberyCreationForm::getTarget() const
{
    return this->target;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToSign() || executor.getGrade() > this->getGradeToExecute())
        throw (GradeTooLowException());
    else
    {
        std::ofstream file;
        file.open(this->getTarget() + "_shrubbery");
        file  << "       # #### ####"<< std::endl;
        file  << "      ### //#|### |/###"<< std::endl;
        file  << "     ##//#/ /||/##/_/##/_"<< std::endl;
        file  << "    ###  //###|/ // # ##"<< std::endl;
        file  << "   ##_/_#/_/## | #/###_/_###"<< std::endl;
        file  << "  ## #### # / #| /  #### ##/#"<< std::endl;
        file  << "   __#_--###`  |{,###---###-"<< std::endl;
        file  << "             / }"<< std::endl;
        file  << "              }}"<< std::endl;
        file  << "              }}"<< std::endl;
        file  << "         ejm  {{"<< std::endl;
        file  << "        , -=-~{ .-^- "<< std::endl;
        file  << "              `"<< std::endl;
        file.close();
}
}