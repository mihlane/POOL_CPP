/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:20:41 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/25 12:37:54 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string h = "HI THIS IS BRAIN";
    std::string *stringPTR = &h;
    std::string &stringREF = h;
    
    std::cout << &h << std::endl;
    std::cout << stringPTR <<std::endl;
     std::cout << &stringREF << std::endl;

     std::cout << h << std::endl;
    std::cout << *stringPTR <<std::endl;
     std::cout << stringREF << std::endl;
    
}