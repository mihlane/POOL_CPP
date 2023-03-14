/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 00:51:38 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/14 01:03:59 by mhabibi-         ###   ########.fr       */
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
    if (x > y)
        return (y);
    if (x < y)
        return (x);
    return (y);
}

template <typename T>

T max(T x, T y)
{
    if (x > y)
        return (x);
    if (x < y)
        return (y);
    return (y);
}

#endif