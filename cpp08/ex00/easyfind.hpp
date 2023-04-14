/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:02:08 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/14 17:26:21 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename Container>

void easyfind(Container &container, int n)
{
    typename Container::iterator it;
    it = std::find(container.begin(), container.end(), n);
    if (it != container.end())
        std::cout << "Found " << n << " in container" << std::endl;
    else
        std::cout << "Not found " << n << " in container" << std::endl;
}

#endif