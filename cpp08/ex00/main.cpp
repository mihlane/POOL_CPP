/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:06:07 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/11 13:07:06 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> myVector ;
    std::list<double> myList ;
    myList.push_back(2.5);
    myList.push_back(1.2);
    myList.push_back(3.7);
    myList.push_back(4.1);
    
    myVector.push_back(2);
    myVector.push_back(1);
    myVector.push_back(3);
    myVector.push_back(4);
    easyfind(myVector, 2);
    // easyfind(myList, 1.2);  
    // print sorted vector
    std::cout << std::endl; 
    return 0;
}