/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:45:10 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 12:24:09 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <iomanip>
#include "bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string const name;
    bool isSigned;
    int const gradeToSign;
    int const gradeToExecute;
public:
    Form(std::string name, int gradeToSign, int gradeToExecute);
    ~Form();
    Form(Form const & src);
    Form & operator=(Form const & rhs);
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
    void setSigned(bool isSigned);
    int getGradeToSign() const;
    bool getIsSigned() const;
    int getGradeToExecute() const;
    std::string getName() const;
    void    besigned(Bureaucrat bureaucrat);
    // void signForm(Bureaucrat &bureaucrat);
};
std::ostream& operator<<(std::ostream& out, const Form& form);

#endif