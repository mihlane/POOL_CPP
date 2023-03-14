/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 00:51:31 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/14 01:15:55 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{

    int ArrInt[] = {1,2,3,4,5};

    iter(ArrInt, 2, my_printf<int>);

    std::string ArrStrrings[] = {"Who's", "Gonna", "Save", "The", "World"};

    iter(ArrStrrings, sizeof(ArrStrrings)/sizeof(ArrStrrings[0]), my_printf<std::string>);

    double ArrDoub[] = {1.2,2.3,3.4,4.5,5.6};

    iter(ArrDoub, 2, my_printf<double>);
}