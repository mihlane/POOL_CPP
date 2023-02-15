/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:44:28 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/15 16:30:11 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
    Fixed(Fixed const &src)
    {
        std::cout << "copy constructor Called\n";
        *this = src;
    }
    Fixed& operator=(Fixed const &lp){
        
        std::cout << "copy assigment operator Called\n";
        this->value = lp.getRawBits();
        
        return *this;
    }
    ~Fixed()
    {
        std::cout << "Destructor Called\n";
    }
    int getRawBits(void) const
    {
        std::cout << "getRawBits member function called\n";
        return(value);
    }
    void    setRawBits(int const raw)
    {
        std::cout << "setRawBits member function called\n";
        this->value = raw;
    }
};

#endif