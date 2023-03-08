/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:10 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 11:53:44 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    std::cout << "Constructor called\n";
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException() ;
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    std::cout << "Copy constructor called\n";
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called\n";
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::increment()
{
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade--;
}

void Bureaucrat::decrement()
{
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade++;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
        this->grade = other.getGrade();
    return *this;
}

// std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
//     {
//     	o << rhs.getGrade();
//     	return o;
//     }

// Bureaucrat& Bureaucrat::operator<<(const Bureaucrat& other)
// {
//     std::cout << other.getName() << ", bureaucrat grade " << other.getGrade();
//     return *this;
// }

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << "Bureaucrat " << rhs.getName() << ", grade " << rhs.getGrade() << std::endl;
    return o;
}


//  std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
// {
//     o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
//     return o;
// }