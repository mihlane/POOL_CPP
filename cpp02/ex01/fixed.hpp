/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:26:34 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/16 00:13:17 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int fract_bit = 8;
public:
    Fixed()
    {
        std::cout << "Default constructor Called\n";
        this->value = 0;
    }
    Fixed (const int n)
    {
        std::cout << "Int constructor called\n";
        
    }
     Fixed (const float n)
    {
        std::cout << "Float constructor called\n";
        
    }
    Fixed(Fixed const &src)
    {
        std::cout << "copy constructor Called\n";
        *this = src;
    }
    Fixed& operator=(Fixed const &lp){
        
        std::cout << "copy assigment operator Called\n";
        this->value = ;
        
        return *this;
    }
    ~Fixed()
    {
        std::cout << "Destructor Called\n";
    }
    float   tofloat(void) const
    {
        return ((float) (value / (1 << 8)));
    }
    int toInt(void)const
    {
        
    }
};

#endif