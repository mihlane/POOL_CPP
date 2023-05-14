/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:14:59 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/05/11 16:51:17 by mhabibi-         ###   ########.fr       */
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




#include <iostream>
#include <sstream>
#include <string>

int main() {
    // input date to compare
    std::string input_date = "2023-05-11";

    // database of dates
    std::string db_date1 = "2023-05-10";
    std::string db_date2 = "2023-05-11";
    std::string db_date3 = "2023-05-12";

    // convert input date to comparable values
    std::istringstream ss(input_date);
    std::string year_str, month_str, day_str;
    char sep;
    ss >> year_str >> sep >> month_str >> sep >> day_str;

    int input_year = std::stoi(year_str);
    int input_month = std::stoi(month_str);
    int input_day = std::stoi(day_str);

    // compare input date to database dates
    if (input_year < 2023) {
        std::cout << "Input date is before all database dates" << std::endl;
    } else if (input_year > 2023) {
        std::cout << "Input date is after all database dates" << std::endl;
    } else {
        if (input_month < 5) {
            std::cout << "Input date is before all database dates in May 2023" << std::endl;
        } else if (input_month > 5) {
            std::cout << "Input date is after all database dates in May 2023" << std::endl;
        } else {
            if (input_day < 10) {
                std::cout << "Input date is before database date: " << db_date1 << std::endl;
            } else if (input_day == 10) {
                std::cout << "Input date is on database date: " << db_date1 << std::endl;
            } else if (input_day == 11) {
                std::cout << "Input date is on database date: " << db_date2 << std::endl;
            } else if (input_day == 12) {
                std::cout << "Input date is on database date: " << db_date3 << std::endl;
            } else {
                std::cout << "Input date is after all database dates in May 2023" << std::endl;
            }
        }
    }

    return 0;
}
