/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:17 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/05 22:15:42 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"

int main(void)
{
    Bureaucrat A("Unknown",140);

    std::cout << A;
    try
    {
        for (size_t i = 0; i < 15; i++)
        {
            A.getGrade();
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "\033[1;31mException Catched\033[0m\n";
        std::cerr << e.what();
    }
    std::cout << A;
}