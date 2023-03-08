/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:22:10 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 14:51:10 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

void AForm::setSigned(bool isSigned)
{
    this->isSigned = isSigned;
}

AForm::AForm(std::string const & name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150)
        throw AForm::GradeTooLowException();
    if (gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToExecute > 150)
        throw AForm::GradeTooLowException();
    this->isSigned = false;
}

int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return this->gradeToExecute;
}

std::string const & AForm::getName() const
{
    return this->name;
}

bool AForm::getIsSigned() const
{
    return this->isSigned;
}

void    AForm::beSigned(Bureaucrat const & bureaucrat)
{
    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw AForm::GradeTooLowException();
    this->isSigned = true;
}

AForm::AForm(AForm const & src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
    *this = src;
}

AForm & AForm::operator=(AForm const & rhs)
{
    this->isSigned = rhs.isSigned;
    return *this;
}

AForm::~AForm()
{
}
void    AForm::execute(Bureaucrat const & executor) const
{
    if (this->getIsSigned() == false)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
}
// voidAForm::execute(Bureaucrat const & executor) const
// {
//     if (this->getIsSigned() == false)
//         throw AForm::FormNotSignedException();
//     if (executor.getGrade() > this->getGradeToExecute())
//         throw AForm::GradeTooLowException();
// }

// AForm::GradeTooHighException::GradeTooHighException()
// {
// }

// AForm::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
// {
//     *this = src;
// }

// AForm::GradeTooHighException & AForm::GradeTooHighException::operator=(GradeTooHighException const & rhs)
// {
//     (void)rhs;
//     return *this;
// }

// AForm::GradeTooHighException::~GradeTooHighException() throw()
// {
// }

// const char * AForm::GradeTooHighException::what() const throw()
// {
//     return "Grade too high";
// }

// AForm::GradeTooLowException::GradeTooLowException()
// {
// }

// AForm::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
// {
//     *this = src;
// }

// AForm::GradeTooLowException & AForm::GradeTooLowException::operator=(GradeTooLowException const & rhs)
// {
//     (void)rhs;
//     return *this;
// }

// AForm::GradeTooLowException::~GradeTooLowException() throw()
// {
// }

// const char * AForm::GradeTooLowException::what() const throw()
// {
//     return "Grade too low";
// }
