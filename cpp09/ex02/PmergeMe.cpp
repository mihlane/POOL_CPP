/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 02:29:51 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/15 07:35:33 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void print_error(const std::string& err)
{
    std::cout << err;
    exit(0);
}

void sort_victour(std::vector<int>& victour)
{
    std::vector<std::pair<int, int> > pairs;
    for (std::vector<int>::iterator i = victour.begin(); i != victour.end();)
    {
        int first = *i;
        if (std::next(i) == victour.end())
        {
            break;
        }
        i++;
        int second = *i;
        if (std::next(i, 2) == victour.end())
        {
            pairs.push_back(std::make_pair(first, second));
            break;
        }
        i++;
        pairs.push_back(std::make_pair(first, second));
    }

    // Sort the pairs based on the first element
    std::sort(pairs.begin(), pairs.end());

    std::vector<int> second_victour;
    std::vector<int> first_victour;
    for (std::vector<std::pair<int, int> >::iterator pit = pairs.begin(); pit != pairs.end(); pit++)
    {
        second_victour.push_back(pit->second);
        first_victour.push_back(pit->first);
    }

    for (std::vector<int>::iterator it = second_victour.begin(); it != second_victour.end(); ++it)
    {
        std::vector<int>::iterator lower = std::lower_bound(first_victour.begin(), first_victour.end(), *it);
        first_victour.insert(lower, *it);
    }

    if (victour.size() % 2 != 0)
    {
        std::vector<int>::iterator it = victour.end() - 1;
        std::vector<int>::iterator lower = std::lower_bound(first_victour.begin(), first_victour.end(), *it);
        first_victour.insert(lower, *it);
    }

    std::cout << "After : ";
    for (std::vector<int>::iterator it = first_victour.begin(); it != first_victour.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void sort_dikyo(std::deque<int> victour)
{
    std::deque<std::pair<int, int> > pairs;
    for (std::deque<int>::iterator i = victour.begin(); i != victour.end();)
    {
        int first = *i;
        if (std::next(i) == victour.end())
        {
            break;
        }
        i++;
        int second = *i;
        if (std::next(i, 2) == victour.end())
        {
            pairs.push_back(std::make_pair(first, second));
            break;
        }
        i++;
        pairs.push_back(std::make_pair(first, second));
    }

    // Sort the pairs based on the first element
    std::sort(pairs.begin(), pairs.end());

    std::deque<int> second_victour;
    std::deque<int> first_victour;
    for (std::deque<std::pair<int, int> >::iterator pit = pairs.begin(); pit != pairs.end(); pit++)
    {
        second_victour.push_back(pit->second);
        first_victour.push_back(pit->first);
    }

    for (std::deque<int>::iterator it = second_victour.begin(); it != second_victour.end(); ++it)
    {
        std::deque<int>::iterator lower = std::lower_bound(first_victour.begin(), first_victour.end(), *it);
        first_victour.insert(lower, *it);
    }

    if (victour.size() % 2 != 0)
    {
        std::deque<int>::iterator it = victour.end() - 1;
        std::deque<int>::iterator lower = std::lower_bound(first_victour.begin(), first_victour.end(), *it);
        first_victour.insert(lower, *it);
    }

    // for (std::deque<int>::iterator it = first_victour.begin(); it != first_victour.end(); it++)
    //     std::cout << *it << " ";
    // std::cout << std::endl;
}