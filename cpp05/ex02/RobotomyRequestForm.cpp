/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:24:42 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 21:58:45 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : AForm("RobotomyRequestForm", 72, 45), target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src), target(src.target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& obj)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	AForm::operator=(obj);
	return (*this);
}

std::string const & RobotomyRequestForm::getTarget() const {
    return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

    if (executor.getGrade() > this->getGradeToSign() || executor.getGrade() > this->getGradeToExecute()) {
        throw (GradeTooLowException());
    }
    srand(time(NULL));
    std::cout << "Brrrr \n";
    if (rand() % 2) {
        std::cout << target << " has been robotomized successfully \n";
    } else {
        std::cout << target << " has not been robotomized successfully \n";
    }
}