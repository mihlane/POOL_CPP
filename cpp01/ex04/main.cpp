/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 00:39:26 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 21:41:24 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac , char **av)
{
    std::string s1;
    std::string s2;
    std::string str;
    int index;
    
    if (ac == 4)
    {
        std::ifstream fd(av[1]);
        std::ofstream replaced(std::string(av[1]) + ".replaced");
        s1 = av[2];
        s2 = av[3];
        if (fd.is_open())
        {
            while (std::getline(fd, str))
            {
                index = 0;
                while ((index = str.find(s1, index)) != (int)std::string::npos)
                {
                    str.erase(index, s1.length());
                    str.insert(index, s2);
		            index += s2.length();
                }
                    replaced << str <<  std::endl;
                
            }
            fd.close();
            replaced.close();
        }
        
    }
    else
        std::cout << "try with correct parameters\n";
}