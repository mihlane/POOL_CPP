/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:21:38 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/15 08:44:06 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char ** av)
{
    if (ac != 2 || (ac == 2 && strcmp(av[1] ,  "input.csv")))
    {
        std::cout << "Error : try with one file called input.csv\n";
        exit(0);
    }
    std::map<std::string, double> mapp;
    std::map<std::string, double> data = get_data();
    std::ifstream inputFile(av[1]);
    if(inputFile.is_open())
    {
        std::string line;
        std::getline(inputFile, line);
        if (line != "date | value")
            print_error("the first line should be like that : 'date | value'\n");
        while (std::getline(inputFile, line))
        {
            if (line.empty())
                continue;
            if (line[4] != '-' || line[7] != '-')
            {
                print_error2("please check the form of the date : yyyy-mm-dd");
                continue;
            }
            int i = check_date(line);
            if (i == 9)
            {
                int signe = check_pipe_and_after(line);
                if (signe == 1)
                    fill_nums(line, data);
            }
        }
    }
    else
        std::cout << "Error : cannot reach to input file\n";
    return (0);
}