/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:13 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/04 18:36:55 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
private:
    std::string const name;
    int grade;
public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    std::string getName(void) const
    {
        return (name);
    }
    int getGrade(void) const
    {
        return (grade);
    }
    void    increment(void)
    {
        this->grade++;
    }
    void    decrement(void)
    {
        this->grade--;
    }
    int GradeTooHighException(void)
    {
        
        return (0);
    }
    class GradeTooLowException : public std::exception
    {
        const char * what () const throw () {
            return "Grade too low";
        }
    };
    class GradeTooHighException : public std::exception
    {
        const char * what () const throw () {
            return "Grade too high";
        }
    };
    Bureaucrat& operator=(const Bureaucrat& other);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << " , " << rhs.getGrade();
    return o;
}
void    signForm(Bureaucrat &bureaucrat, Form &form)
{
    if (bureaucrat.getGrade() <= form.getGradeToSign())
    {
        std::cout << bureaucrat.getName() << " signs " << form.getName() << std::endl;
        form.setIsSigned(true);
    }
    else
        std::cout << bureaucrat.getName() << " cannot sign " << form.getName() << " because his grade is too low" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
        this->grade = other.getGrade();
    return *this;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    std::cout << "Constructor called\n";
    // this->name = name;
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

#endif