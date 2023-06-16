/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:16:56 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/15 08:57:27 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void    print_error(std::string str)
{
    std::cout << str;
    exit (0);
}

int    check_date(std::string line)
{
    for (int i = 0; i < (int)line.length(); i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (line[i] < '0' || line[i] > '9')
        {
            print_error2("wrong input numbers");
            return(i);
        }
        if (i == 9)
            break;
    }
    return (9);
}

void    print_error2(std::string str)
{
    std::cout << str << std::endl;
}

int    check_pipe_and_after(std::string line)
{
    int point = 0;
    int pipe = 0;
    int number = 0;
    for (int i = 10; i < (int)line.length(); i++)
    {
        while (line[i] && line[i] == ' ')
            i++;
        if (line[i] == '|')
            pipe++;
        if (line[i] == '.')
            point++;
        if (line[i] == '.' && line[i -1 ] == ' ')
        {
            std::cout << "Error : Bad input\n";
            return (0);
        }
        if (line[i] != '.' && line[i] != ' ' && (line[i] < '0' || line[i] > '9') && line[i] != '|')
        {
            std::cout << "Error : Bad input\n";
            return (0);
        }
        if (line[i] >= '0' && line[i] <= '9')
        {
            number++;
            while (line[i] && (line[i] == '.' || (line[i] >= '0' && line[i] <='9')))
            {
                if (line[i] == '.')
                    point++;
                i++;
            }
        }
        
    }
    if (number != 1 || pipe != 1 || point > 1)
    {
        std::cout << "Error : Bad input\n";
        return (0);
    }
    return (1);
}

int    check_valid_date(int day, int month, int year)
{

    if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31) 
    {
        print_error2("invalid date");
        return (1);
    }
    if (year < 2009 && month < 1 && day < 2)
    {
        print_error2("date not found in DB");
        return (1);
    }
    if (year > 2022 && month > 3 && day > 29)
    {
        print_error2("date not found in DB");
        return (1);
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) 
    {
        print_error2("invalid date");  // Invalid day for 30-day months
        return (1);
    }
    if (month == 2) {
        bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if ((isLeapYear && day > 29) || (!isLeapYear && day > 28)) {
            print_error2("yeap year"); // Invalid day for February
            return (1);
        }
}
    return (0);
}

void    fill_nums(std::string line, std::map<std::string, double> mapp)
{

    // Extracting the values using string manipulation
    std::string dateStr, numberStr;
    std::istringstream iss(line);

    std::getline(iss, dateStr, '|');  // Extract the date part
    std::getline(iss, numberStr);     // Extract the number part

    // Trim whitespace from the extracted values if needed
    // (This step is optional)
    dateStr.erase(0, dateStr.find_first_not_of(' '));
    dateStr.erase(dateStr.find_last_not_of(' ') + 1);
    numberStr.erase(0, numberStr.find_first_not_of(' '));
    numberStr.erase(numberStr.find_last_not_of(' ') + 1);
 
    std::string yea = dateStr.substr(0, 4);
    int year = std::atoi(yea.c_str());
    std::string mon = dateStr.substr(5, 7);
    int month = std::atoi(mon.c_str());
    std::string da = dateStr.substr(8, 9);
    int day = std::atoi(da.c_str());
    double numberr = std::stod(numberStr);
    // Output the extracted values
    int sign = check_valid_date(day, month, year);
    if (numberr > 1000 || numberr < 0)
    {
        std::cout << "try with value between 0 and 1000 please \n";
        return;
    }
    // mapp.insert(std::make_pair(dateStr, numberr));
    if (sign != 1)
    {
        std::map<std::string, double>::iterator it = mapp.lower_bound(dateStr);
            std::cout << dateStr << " => " << numberr << " = "<< it->second * numberr <<std::endl;
    }
    // std::cout << "Date: " << year << " " << month << " " << day;
    // std::cout << " Number: " << numberStr << std::endl;
}

std::map<std::string, double>   get_data(void)
{
    std::map<std::string, double> data;
    std::ifstream inputFile("./data.csv");
    if(inputFile.is_open())
    {
        std::string line;
        std::getline(inputFile, line);
        while (std::getline(inputFile, line))
        {
            std::string date = line.substr(0,10);
            std::string val = line.substr(11, line.size());
            double value = std::stod(val);
            data.insert(std::make_pair(date, value));
            // std::cout <<  "daaaaaaaaaate "<<date << "   vaaaaal "<< val << std::endl;
        }
    }
    else
    {
        std::cout << "please try to put a file calle data.csv int the current directory\n";
        exit(0);
    }
        return (data);
}
