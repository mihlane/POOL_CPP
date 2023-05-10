/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:14:59 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/05/10 12:15:01 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

int main() {
    std::ifstream infile("input.txt");
    std::string line;
    std::map<std::string, double> data;

    while (std::getline(infile, line)) {
        std::stringstream ss(line);
        std::string date_str;
        double value;
        char sep;

        if (ss >> date_str >> sep >> value && sep == '|' && !ss.fail()) {
            data[date_str] = value;
        } else {
            std::cerr << "Error: invalid input line: " << line << std::endl;
        }
    }

    // Print the parsed data
    for (const auto& [date, value] : data) {
        std::cout << date << " -> " << value << std::endl;
    }

    return 0;
}
