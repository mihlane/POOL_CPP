/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:45:10 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 14:46:55 by mhabibi-         ###   ########.fr       */
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
    Form();
    Form(std::string name, int gradeToSign, int gradeToExecute);
    ~Form();
    Form(Form const & src);
    Form & operator=(Form const & rhs);
    void    beSigned(Bureaucrat bureaucrat);
    void setSigned(bool isSigned);
    int getGradeToSign() const;
    bool getIsSigned() const;
    int getGradeToExecute() const;
    std::string getName() const;
    class GradeTooHighException : public std::exception
    {
        const char * what () const throw ();
    };
    class GradeTooLowException : public std::exception
    {
        const char * what () const throw ();
    };
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif