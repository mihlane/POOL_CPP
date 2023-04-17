/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:06:07 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/17 15:53:09 by mhabibi-         ###   ########.fr       */
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
    easyfind(myVector, 2);
    // print sorted vector
    // std::cout << std::endl; 
    return 0;
}