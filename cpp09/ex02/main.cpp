/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 02:29:31 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/14 04:40:46 by mhabibi-         ###   ########.fr       */
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

void    sort_victour(std::vector<int> &victour)
{
    std::vector<std::pair<int, int> > pairs;
    std::cout << "hello\n";
    if (victour.size() % 2 == 0)
    {
    for (std::vector<int>::iterator i = victour.begin(); i != victour.end();) {
         std::cout << "hello\n";
        int first = *i;
            i++;
        int second = *i;
        if (std::next(i) == victour.end())
        {
            pairs.push_back(std::make_pair(first, second));
            break;
        }
            i++;
        pairs.push_back(std::make_pair(first, second));
    }
}
    for (std::vector<std::pair<int, int> >::iterator pit = pairs.begin(); pit != pairs.end(); pit++)
        if (pit->first > pit->second)
            std::swap(pit->first, pit->second);
    std::vector<int> second_victour;
    std::vector<int> first_victour;
    for (std::vector<std::pair<int, int> >::iterator pit = pairs.begin(); pit != pairs.end(); pit++)
    {
        second_victour.push_back(pit->second);
        first_victour.push_back(pit->first);
        std::cout << pit->first << "     " << pit->second << std::endl;
    }

    for ( std::vector<int>::iterator it = second_victour.begin(); it != second_victour.end(); ++it) {
         std::vector<int>::iterator lower = std::lower_bound(first_victour.begin(), first_victour.end(), *it);
        first_victour.insert(lower, *it);
    }
    for (std::vector<int>::iterator it = first_victour.begin(); it != first_victour.end(); it++)
        std::cout << "haaaaaaahowa " << *it << std::endl;


        // mazaaaaaal lia akhir wa7d la kan ac fardi 
    
}

// void sort_victour(std::vector<int>& victour)
// {
//     std::vector<std::pair<int, int> > pairs;
//     for (size_t i = 0; i < victour.size(); i += 2) {
//         int first = victour[i];
//         int second = (i + 1 < victour.size()) ? victour[i + 1] : 0;
//         pairs.push_back(std::make_pair(first, second));
//         std::cout << first << "       " << second << std::endl;
//     }

//     for (const auto& pair : pairs) {
//         std::cout << "(" << pair.first << ", " << pair.second << ") ";
//     }
// }
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
        }
                sort_victour(victour);
                sort_dikyo(dikyo);
    }
    else
        print_error("Error : please try with more than one arg!!!!!1\n");
}