/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:22:50 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/05 21:30:45 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
    protected:
    std::string const name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;
    public:
    ~AForm(){};
    AForm(std::string name, int gradeToSign, int gradeToExecute);
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
            throw GradeTooLowException();
    }
};

#endif