/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:02:08 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/11 13:45:13 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename Container>

void easyfind(Container &x, int i)
{
    // std:: it
    int *k;
    typename Container::iterator begin = x.begin();
    typename Container::iterator end = x.end();
     typename Container::iterator = std::find(begin, end, i);
    std::cout << k << i << end << begin << std::endl;
    // T s;
    // s = x;
    // x = y;
    // y = s;
}

#endif