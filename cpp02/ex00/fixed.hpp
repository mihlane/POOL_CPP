/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:44:28 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/14 16:10:24 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class fixed
{
private:
    int value;
    static const int fract_bit = 8;
public:
    fixed()
    {
        std::cout << "Default constructor Called\n";
        this->value = 0;
    }
    fixed(fixed const &src)
    {
        std::cout << "copy constructor Called\n";
        this->value = src.value;
    }
    ~fixed();
    int getRawBits(void) const
    {
        return(value);
    }
    void    setRawBits(int const raw)
    {
        this->value = raw;
    }
};

#endif