/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:17 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 17:48:29 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat B("dokkaebi", 2);
    
    // sign 25, exec 5
    PresidentialPardonForm a("contrat");

    // sign 145, exec 137
    ShrubberyCreationForm b("contrat");

    // sign 72, exec 45
    RobotomyRequestForm c("contrat");
    
    try
    {
        // b.beSigned(B);
        // B.signForm(b);
        B.executeForm(b);
        // b.execute(B);
        
        a.beSigned(B);
        // B.signForm(a);
        B.executeForm(a);
        // a.execute(B);
        
        c.beSigned(B);
        B.signForm(c);
        B.executeForm(c);
        
        // c.execute(B);
        // std::cout << B << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    };
}