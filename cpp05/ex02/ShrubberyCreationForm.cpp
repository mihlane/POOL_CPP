/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:22:58 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 14:45:09 by mhabibi-         ###   ########.fr       */
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
    if (this->getIsSigned() == false)
        throw Bureaucrat::GradeTooHighException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else
    {
        std::ofstream file;
        file.open(this->getTarget() + "_shrubbery");
        file << "         v" << std::endl;
        file << "        >X<" << std::endl;
        file << "         A" << std::endl;
        file << "        d$b" << std::endl;
        file << "      .d\\$$b." << std::endl;
        file << "    .d$i$$\\$$b." << std::endl;
        file << "   .d$$@b\\$$$ib." << std::endl;
        file << "  .d$$i$$b\\$$$$b." << std::endl;
        file << "  d$$@$$$i$$\\$$$b" << std::endl;
        file << " :$$$$$i$$$@$b\\$$b" << std::endl;
        file << " $$$i$$$$$@$b\\$$$i" << std::endl;
        file << " $$@$i$$$$@@b\\$$@b" << std::endl;
        file << " :$@$b$$$$@@b\\$@$i" << std::endl;
        file << "  $@$b\\$$$@@@b\\$@$b" << std::endl;
        file << "  :$@$b\\$@b\\$$$$@$i" << std::endl;
        file << "   $$$b\\$$$$@$b\\$$b" << std::endl;
        file << "   :$$$b\\$$$@$b\\$$$" << std::endl;
        file << "    $$$b\\$@$b\\$$$i" << std::endl;
        file << "    :$$$b\\$$$b\\$$$:" << std::endl;
        file << "     $$$b\\$$$ib\\$$" << std::endl;
        file << "     :$$$b\\$$$b\\$:" << std::endl;
        file << "      $$$b\\$@$b\\$" << std::endl;
        file << "      :$$$b\\$$$b:" << std::endl;
        file << "       $$$:$$$" << std::endl;
}
}