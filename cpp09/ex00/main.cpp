/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:21:38 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/05/10 15:37:52 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: could not open file.\n";
        exit(0);
    }
    std::map<std::string, double> data;
    std::string line;
    std::ifstream inputFile(av[1]);
    if(inputFile.is_open())
    {
        while (std::getline(inputFile, line)) 
        {
            std::stringstream ss(line);
        std::string date_str;
        double value;
        char sep;

        if (ss >> date_str >> sep >> value && sep == '|' && !ss.fail()) {
            data[date_str] = value;
            std::cout << line << std::endl;
        } else {
            std::cerr << "Error: invalid input line: " << line << std::endl;
        }
        }
            inputFile.close();
    }
    else
        {
            std::cout << "error opening file\n";
            exit(0);
        }
}