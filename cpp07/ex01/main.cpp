/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 00:51:31 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/10 01:05:32 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{

    int ArrInt[] = {1,2,3,4,5};

    iter(ArrInt, 5, print<int>);

    std::string ArrStrrings[] = {"Who's", "Gonna", "Save", "The", "World"};

    iter(ArrStrrings, sizeof(ArrStrrings)/sizeof(std::string), print<std::string>);

    double ArrDoub[] = {1.2,2.3,3.4,4.5,5.6};

    iter(ArrDoub, 5, print<double>);
}