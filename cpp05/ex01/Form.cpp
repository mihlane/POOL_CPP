/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:53:04 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 14:47:04 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToExecute > 150)
        throw Form::GradeTooLowException();
    this->isSigned = false;
}

const char *Form::GradeTooHighException::GradeTooHighException::what() const throw()
{
   return"Grade too high\n";
}

const char *Form::GradeTooLowException::GradeTooLowException::what() const throw()
{
    return ("Grade too low\n");
}

Form::Form() : name("unkown") , gradeToSign(1), gradeToExecute(1)
{
    this->isSigned = false;
    std::cout << "Default constructor called" << std::endl;
}

int Form::getGradeToSign() const
{
    return this->gradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->gradeToExecute;
}
std::string Form::getName() const
{
    return this->name;
}
bool Form::getIsSigned() const
{
    return this->isSigned;
}
void Form::setSigned(bool isSigned)
{
    this->isSigned = isSigned;
}
void    Form::beSigned(Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw Form::GradeTooLowException();
    this->isSigned = true;
}

Form::Form(Form const & src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
    *this = src;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
    this->isSigned = other.getIsSigned();
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    if (form.getIsSigned() == true)
        std::cout << "Form is signed" << std::endl;
    else
        std::cout << "Form is not signed" << std::endl;
    std::cout << "Form name: " << form.getName() << std::endl;
    std::cout << "Form grade to sign: " << form.getGradeToSign() << std::endl;
    std::cout << "Form grade to execute: " << form.getGradeToExecute() << std::endl;
    std::cout << "Sign is : " << form.getIsSigned() << std::endl;
    return out;
}