/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:32:06 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/12 15:00:48 by mhabibi-         ###   ########.fr       */
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

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high\n";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low\n";
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