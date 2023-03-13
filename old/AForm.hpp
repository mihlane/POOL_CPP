#ifndef  AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <iomanip>
#include "bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    std::string const name;
    bool isSigned;
    int const gradeToSign;
    int const gradeToExecute;
public:
    AForm(std::string name, int gradeToSign, int gradeToExecute);
    virtual ~AForm();
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
    bool getIsSigned() const ;
    int getGradeToExecute() const;
    void    execute(Bureaucrat const & executor) const;
    // int getGradeToExecute() const;
    std::string getName() const;
    void    besigned(Bureaucrat bureaucrat);
    // void signForm(Bureaucrat &bureaucrat);
};

#endif