/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:17 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 22:50:11 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat B("dokkaebi", 1);
        PresidentialPardonForm a("contrat");
        ShrubberyCreationForm b("contrat");
        RobotomyRequestForm c("contrat");
        b.beSigned(B);
        B.signForm(b);
        B.executeForm(b);
        // b.execute(B);
        std::cout << "hahowa bda "<< std::endl;
        a.beSigned(B);
        B.signForm(a);
         B.executeForm(a);
        // a.execute(B);
        std::cout << "hahowa sala "<< std::endl;
        c.beSigned(B);
        B.signForm(c);
        B.executeForm(c);
        // c.execute(B);
        // std::cout << B << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    };
}