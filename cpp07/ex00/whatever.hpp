/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 00:51:38 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/09 22:20:20 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &x, T &y)
{
    T s;
    s = x;
    x = y;
    y = s;
}

template <typename T>

T min(T x, T y)
{
    if (x < y)
        return (x);
    return (y);
}

template <typename T>

T max(T x, T y)
{
    if (x > y)
        return (x);
    return (y);
}

#endif