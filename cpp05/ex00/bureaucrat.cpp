/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:32:06 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 14:23:49 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
    if (this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade--;
}

void Bureaucrat::decrement()
{
    if (this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade++;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    this->grade = other.getGrade();
    return *this;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high\n";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low\n";
}

Bureaucrat::Bureaucrat() : name("default")
{
    grade = 50;
    std::cout << "Default constructor called\n";
}

 std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return o;
}