/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:24:24 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 17:11:47 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : AForm("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src), target(src.target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
    AForm::operator=(rhs);
    return *this;
}

std::string const & PresidentialPardonForm::getTarget() const
{
    return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToSign() || executor.getGrade() > this->getGradeToExecute()) {
        throw (GradeTooLowException());
    }
	else 
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}