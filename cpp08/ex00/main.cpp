/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:06:07 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/12 20:29:13 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> myVector ;
    std::list<double> myList ;
    myVector.push_back(2);
    myVector.push_back(1);
    myVector.push_back(3);
    myVector.push_back(4);
    myList.push_back(2);
    myList.push_back(1);
    myList.push_back(3);
    myList.push_back(4);
    easyfind(myList, 3);
    return 0;
}