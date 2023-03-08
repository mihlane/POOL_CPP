/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:18:43 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 03:23:14 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// #include "Bureaucrat.hpp"
// #include "AForm.hpp"
// #include <fstream>

// class Bureaucrat;
// class ShrubberyCreationForm;

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src), target(src.target)
{
    std::cout << "ShrubberyCreationForm copy constructor called\n";
    *this = src;
}   

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called\n";
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
    // std::cout << "ShrubberyCreationForm assignation operator called\n";
    if (this != &rhs)
    {
        this->target = rhs.target;
    }
    return *this;
}

void ShrubberyCreationForm::beSigned(Bureaucrat const & bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradeToSign())
        this->setSigned(true);
    else
        throw AForm::GradeTooLowException();
}
bool ShrubberyCreationForm::getSigned() const
{
    return this->getIsSigned();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::ofstream file;
    file.open(this->target + "_shrubbery");
    file << "       v\n";
    file << "      >X<\n";
    file << "       A\n";
    file << "      d$b\n";
    file << "     d$$b\n";
    file << "    d$$$b\n";
    file << "   d$$$$$b\n";
    file << "  d$$$$$$$b\n";
    file << " d$$$$$$$$$b\n";
    file << "d$$$$$$$$$$$b\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";
    file << "      #\n";

    file.close();

}

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & rhs)
{
    o << rhs.getName() << " form, grade to sign: " << rhs.getGradeToSign() << ", grade to execute: " << rhs.getGradeToExecute() << ", is signed: " << rhs.getSigned() << std::endl;
    return o;
}

void beSigned(Bureaucrat const & bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradeToSign())
        this->setSigned(true);
    else
        throw AForm::GradeTooLowException();
}



