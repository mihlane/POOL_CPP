/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:13 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 11:44:05 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include <iostream>
#include <string>
#include <exception>
#include <iomanip>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string const name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const & src);
    Bureaucrat& operator=(const Bureaucrat& other);
    void signForm(Form  & f);
    std::string getName(void) const;
    int getGrade(void) const;
    void    decrement(void);
    void    increment(void);
    class GradeTooHighException : public std::exception
    {
        const char * what () const throw ();
    };
    class GradeTooLowException : public std::exception
    {
        const char * what () const throw ();
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);

#endif