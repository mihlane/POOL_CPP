/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:10 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 17:44:28 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"
// #include "Form.hpp"

Bureaucrat::Bureaucrat() : name("unkown")
{
    this->grade = 1;
    std::cout << "Default constructor called\n";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low\n";
}

void Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->getName() << " signed " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->getName() << " couldn’t sign " << f.getName() << " because " << f.getGradeToSign() << std::endl;
        std::cerr << e.what() << '\n';
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    std::cout << "Copy constructor called\n";
    *this = src;
}


void Bureaucrat::decrement()
{
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade++;
}

void Bureaucrat::increment()
{
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade--;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    this->grade = other.getGrade();
    return *this;
}
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

Bureaucrat::~Bureaucrat()
{
    std::cout << "destructor called\n";
}
 std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << " , " << rhs.getGrade();
    return o;
}