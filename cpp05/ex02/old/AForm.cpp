/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 00:18:22 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 03:19:25 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "bureaucrat.hpp"

class Bureaucrat;

void    AForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    if (this->getIsSigned() == false)
        throw AForm::GradeTooLowException();
    std::cout << executor.getName() << " executes " << this->getName() << std::endl;
}

void    AForm::besigned(Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradeToSign())
        this->setSigned(true);
    else
        throw AForm::GradeTooLowException();
}

void AForm::setSigned(bool isSigned)
{
      this->isSigned = isSigned;
}
int AForm::getGradeToSign() const
{
    return this->gradeToSign;
}
bool AForm::getIsSigned() const 
{
    return this->isSigned;
}
int AForm::getGradeToExecute() const
{
    return this->gradeToExecute;
}