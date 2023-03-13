/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:21:48 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 11:35:06 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
    private:
        std::string const name;
        bool isSigned;
        int const gradeToSign;
        int const gradeToExecute;
    public:
        AForm(std::string const & name, int gradeToSign, int gradeToExecute);
        AForm(AForm const & src);
        virtual ~AForm();
        AForm & operator=(AForm const & rhs);
        std::string const & getName() const;
        // void execute(Bureaucrat const & executor) const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(Bureaucrat const & bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
        void setSigned(bool isSigned);
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
};

#endif