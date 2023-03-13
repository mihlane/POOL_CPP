/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:12:17 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 17:40:30 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{

    try
    {
        Bureaucrat A("unkown",151);
        // for (size_t i = 0; i < 15; i++)
        //     A.increment();
        std::cout << A << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
}