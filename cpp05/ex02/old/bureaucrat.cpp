/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:10 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 03:14:25 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"
#include "AForm.hpp"


void Bureaucrat::signForm(AForm const &f)
{
    if (f.getIsSigned() == true)
        std::cout << this->getName() << " signed " << f.getName() << std::endl;
    else
        std::cout << this->getName() << " couldn’t sign " << f.getName() << " because " << f.getGradeToSign() << std::endl;
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

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.getName())
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

void    Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

// Bureaucrat & Bureaucrat::operator<<(Bureaucrat const & rhs)
// {
//     std::cout << rhs.getName() << " , " << rhs.getGrade();
//     return rhs;
// }

Bureaucrat::~Bureaucrat()
{
    std::cout << "destructor called\n";
}
 std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
    {
    	o << rhs.getName() << " , " << rhs.getGrade();
    	return o;
    }
