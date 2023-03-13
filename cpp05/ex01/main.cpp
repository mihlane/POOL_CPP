/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:17 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 14:47:20 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

    try
    {
        Bureaucrat A;
        Form b("hola", 100, 110);
        b.beSigned(A);
        std::cout << "******\n";
        A.signForm(b);
        std::cout << "******\n";
        Bureaucrat D("Omar",101);
        std::cout << "******\n";
        D.signForm(b);
        std::cout << "******\n"; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
   
}