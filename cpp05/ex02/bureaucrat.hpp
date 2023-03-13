/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:20:17 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/12 23:55:29 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
#include "AForm.hpp"
class AForm;

class Bureaucrat
{
    private:
        std::string const name;
        int grade;
    public:
        Bureaucrat(std::string const & name, int grade);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat();
        Bureaucrat & operator=(Bureaucrat const & rhs);
        std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();
        void signForm(AForm & form);
        void executeForm(AForm const & f);
        class GradeTooHighException : public std::exception
    {
        const char * what () const throw ();
    };
    class GradeTooLowException : public std::exception
    {
        const char * what () const throw ();
    };
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif