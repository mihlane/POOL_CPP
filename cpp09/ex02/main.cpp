/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 02:29:31 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/15 07:38:17 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PmergeMe.hpp"

int main(int ac, char* av[])
{
    if (ac != 1)
    {
        std::vector<int> victour;
        std::deque<int> dikyo;
        for (int j = 1; j < ac; j++)
        {
            for (int i = 0; av[j][i] != '\0'; i++)
            {
                if (!isdigit(av[j][i]) && av[j][i] != '-' && av[j][i] != '+')
                    print_error("Error\n");
            }
            victour.push_back(atoi(av[j]));
            dikyo.push_back(atoi(av[j]));
        }
        std::cout << "Befor : ";
        for (int i = 1; i < ac; i++)
            std::cout << av[i] << " ";
        std::cout << std::endl;
        clock_t victour_start = clock();
        sort_victour(victour);
        double victour_end =static_cast<double>( clock() - victour_start)/ CLOCKS_PER_SEC * 10;
        
        std::cout << "Time to process a range of " << (ac - 1) << " with std::vector is: " << victour_end << " us" << std::endl;

        clock_t dikyo_start = clock();
        sort_dikyo(dikyo);
        double dikyo_end =static_cast<double>( clock() - dikyo_start)/ CLOCKS_PER_SEC * 10;

        std::cout << "Time to process a range of " << (ac - 1) << " with std::deque is: " << dikyo_end << " us" << std::endl;
    }
    else
    {
        print_error("Error: Please provide more than one argument!\n");
    }
    return 0;
}
