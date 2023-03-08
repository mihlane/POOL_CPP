/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:17 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 12:25:37 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

    try
    {
        Bureaucrat A("Unknown",110);
        Form b("hola", 100, 110);
        b.besigned(A);
        A.signForm(b);
        // for (size_t i = 0; i < 15; i++)
        //     A.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
   
}