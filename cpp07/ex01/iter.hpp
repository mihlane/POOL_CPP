/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 01:05:05 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/10 01:14:07 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>

void    print(T t)
{
    std::cout << t << std::endl;
}

template <typename A, typename B, typename C>

void    iter(A adr, B len, C fun)
{
    for (B i = 0; i < len; i++)
        fun(adr[i]);
}

#endif