/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:32:34 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 14:23:42 by mhabibi-         ###   ########.fr       */
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
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const & src);
    Bureaucrat& operator=(const Bureaucrat& other);
    std::string getName(void) const;
    int         getGrade(void) const;
    void        decrement(void);
    void        increment(void);
    class GradeTooHighException : public std::exception
    {
        public:
        const char * what () const throw ();
    };
    class GradeTooLowException : public std::exception
    {
        public:
        const char * what () const throw ();
    };
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif