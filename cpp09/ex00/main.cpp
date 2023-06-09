/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:21:38 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/08 16:39:30 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>

// Function to split a string
std::vector<std::string> splitString(const std::string& str, char delimiter) 
{
    std::vector<std::string> tokens;
    std::string token;
    
    std::string::size_type pos = 0;
    std::string::size_type prevPos = 0;
    
    while ((pos = str.find(delimiter, prevPos)) != std::string::npos) {
        token = str.substr(prevPos, pos - prevPos);
        tokens.push_back(token);
        prevPos = pos + 1;
    }
    
    // Adding the last token after the last delimiter
    token = str.substr(prevPos);
    tokens.push_back(token);
    
    return tokens;
}

int main()
{
    std::string line;
    line = "1998-01-02,42,";
    char sep = ',';
    std::vector<std::string> tokens = splitString(line, sep);
    std::vector<std::string>::iterator it = tokens.begin();
    for ( ;it != tokens.end(); it++)
    {
        if (*it != "" || *it != "\n")
            std::cout << *it << std::endl;
    }
}

// int main(int ac, char **av)
// {
//     if (ac != 2)
//     {
//         std::cout << "Error: Wrong number of arguments.\n";
//         exit(0);
//     }

    
//     std::map<std::string, double> data;
//     std::string line;
//     std::ifstream inputFile(av[1]);
//     if(inputFile.is_open())
//     {
//         while (std::getline(inputFile, line)) 
//         {
//             std::stringstream ss(line);
//             std::string date_str;
//             double value;
//             char sep;
//                 std::string substr = "-";
//             if (ss >> date_str >> sep >> value && sep == ',' && !ss.fail()) 
//             {
//                 data[date_str] = value;
//                 for(int i = 0; i <int(date_str.length()); i++)
//                 {
//                     size_t pos = date_str.find(substr); // Find the position of the substring
//                     if (pos != std::string::npos) // Check if the substring exists in the string
//                         date_str.replace(pos, substr.length(), "");
//                     else 
//                         break; // Replace the substring with an empty string
//                 }
//                 std::cout << date_str << std::endl;
//             } 
//             else
//             std::cerr << "Error: invalid input line: " << line << std::endl;
//         }
//             inputFile.close();
//     }
//     else
//         {
//             std::cout << "error opening file\n";
//             exit(0);
//         }
// }