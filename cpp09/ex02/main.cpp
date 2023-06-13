/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 02:29:31 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/13 04:16:15 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <deque>

void    print_error(std::string err)
{
    std::cout << err;
    exit(0);
}

void    sort_victour(std::vector<int> victour)
{
    
}
// make a vector of pairs // std::pair or std make_pair
// first & second // make the first one the smallest one 
void    sort_dikyo(std::deque<int> dikyo)
{
    
}

int main(int ac, char *av[])
{
    if (ac != 1)
    {
        std::vector<int> victour;
        std::deque<int> dikyo;
        for (int j = 1; j < ac; j++)
        {
            for (int i = 0; i < strlen(av[j]);i++)
            {
                if ((av[j][i] == '-') || 
                    (av[j][i] =='+' && (av[j][i+1] < '0' || av[j][i+1] > '9')))
                    print_error("Error\n");
                else if (av[j][i] !='+' && (av[j][i] < '0' || av[j][i] > '9'))
                    print_error("Error\n");
            }
                victour.push_back(atoi(av[j]));
                dikyo.push_back(atoi(av[j]));
                sort_victour(victour);
                sort_dikyo(dikyo);
        }
    }
    else
        print_error("Error : please try with more than one arg!!!!!1\n");
}