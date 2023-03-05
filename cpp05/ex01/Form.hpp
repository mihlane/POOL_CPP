/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:38:09 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/04 19:03:01 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

# include <iostream>
#include "bureaucrat.hpp"

class Form
{
    private:
    std::string const name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;
    public:
    ~Form();
    Form(std::string name, int gradeToSign, int gradeToExecute);
    int getGradeToSign(void)
    {
        return (gradeToSign);
    }
    int getGradeToExecute(void)
    {
        return (gradeToExecute);
    }
    bool getIsSigned(void)
    {
        return (isSigned);
    }
    std::string getName(void)
    {
        return (name);
    }
    class GradeTooHighException : public std::exception
    {
        const char * what () const throw () {
            return "Grade too high";
        }
    };
    class GradeTooLowException : public std::exception
    {
        const char * what () const throw () {
            return "Grade too low";
        }
    };
    void beSigned(Bureaucrat &bureaucrat)
    {
        if (bureaucrat.getGrade() <= gradeToSign)
            isSigned = true;
        else
            throw Form::GradeTooLowException();
    }
    void setSigned(bool isSigned)
    {
        this->isSigned = isSigned;
    }
    void    setIsSigned(bool isSigned)
    {
        this->isSigned = isSigned;
    }
};
Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}
Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    std::cout << "Form constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    else
        isSigned = false;
}
#endif