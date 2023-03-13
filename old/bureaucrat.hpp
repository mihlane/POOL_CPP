/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:13 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 03:11:24 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include <iostream>
#include <string>
#include <exception>
#include <iomanip>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
    std::string const name;
    int grade;
public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    void    executeForm(AForm const & form);
    void signForm(AForm const & f);
    std::string getName(void) const
    {
        return (name);
    }
    int getGrade(void) const
    {
        return (grade);
    }
    void    decrement(void)
    {
        this->grade++;
        if (this->grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    void    increment(void)
    {
        this->grade--;
        if (this->grade < 1)
            throw Bureaucrat::GradeTooHighException() ;
    }
    class GradeTooHighException : public std::exception
    {
        const char * what () const throw () {
            return "Grade too high\n";
        }
    };
    class GradeTooLowException : public std::exception
    {
        const char * what () const throw () {
            return "Grade too low\n";
        }
    };
    Bureaucrat& operator=(const Bureaucrat& other);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat & operator<<(Bureaucrat const & rhs);
};



#endif