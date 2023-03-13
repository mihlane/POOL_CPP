/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:22:10 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 17:31:10 by mhabibi-         ###   ########.fr       */
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

const char *AForm::GradeTooHighException::GradeTooHighException::what() const throw()
{
   return"Grade too high\n";
}

const char *AForm::GradeTooLowException::GradeTooLowException::what() const throw()
{
    return ("Grade too low\n");
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
    // std::cout << "AForm destructor called" << std::endl;
}