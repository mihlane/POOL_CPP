/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:21:07 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 12:10:34 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

void Bureaucrat::signForm(AForm &f)
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
    // if (f.getIsSigned() == true)
    //     std::cout << this->getName() << " signed " << f.getName() << std::endl;
    // else
    //     std::cout << this->getName() << " couldn’t sign " << f.getName() << " because " << f.getGradeToSign() << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
        this->grade = other.getGrade();
    return *this;
}
Bureaucrat::Bureaucrat(std::string const & name, int grade) : name(name)
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

std::string Bureaucrat::getName() const
{
    return this->name;
}

void Bureaucrat::increment()
{
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade--;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low\n");
}


void Bureaucrat::decrement()
{
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade++;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void    Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executes " << form.getName() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << this->getName() << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
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