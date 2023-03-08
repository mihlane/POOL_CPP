/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:13 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 11:54:21 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>

class Bureaucrat
{
private:
    std::string const name;
    int grade;
public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    std::string getName(void) const;
    Bureaucrat(Bureaucrat const & src);
    int getGrade(void) const;
    void    decrement(void);
    void    increment(void);
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
    // Bureaucrat& operator<<(const Bureaucrat& other);
    // std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif