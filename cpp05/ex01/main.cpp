/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:17 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/05 22:18:12 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
    Form        A;
    Bureaucrat  valid("The Governor", 51);

    std::cout << A;
    std::cout << valid;

    
    valid.signForm(A);
    A.beSigned(valid);
    

    Form        B("NewForm",60);
    Bureaucrat  invalid("The Nacho", 61);

    std::cout << B;
    std::cout << invalid;

    B.beSigned(invalid);
    invalid.signForm(B);
    B.beSigned(invalid);
}