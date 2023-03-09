/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 22:58:41 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/09 00:45:10 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(Intern const& obj)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = obj;
}

const char * Intern::UnknownFormException::what() const throw()
{
	return " Intern : Invalid form ";
}
Intern & Intern::operator=(Intern const & src)
{
    std::cout << "Intern Assignation operator called" << std::endl;
    (void)src;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}



AForm *Intern::makeForm(std::string formName, std::string target)
{
    AForm *f = NULL;
    int i;
    std::string Names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    for (i = 0;i < 3;i++)
    {
        if (Names[i] == formName)
            break;
    }
    switch (i)
    {
    case 0:
    {
            f = new RobotomyRequestForm(target);
        break;
    }
    case 1:
       { 
        f = new PresidentialPardonForm(target);
        break;
    }
    case 2:
    {
        f = new ShrubberyCreationForm(target);
        break;
    }
    default:
    {
        throw Intern::UnknownFormException();
        break;
        }
    }
    std::cout << "Intern creates " << formName.c_str() << std::endl;
    return (f);
}