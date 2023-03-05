/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:44:26 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/04 23:22:26 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

    Fixed::Fixed()
    {
        std::cout << "Default constructor Called\n";
        this->value = 0;
    }
    Fixed::Fixed(Fixed const &src)
    {
        std::cout << "copy constructor Called\n";
        *this = src;
    }
    Fixed& Fixed::operator=(Fixed const &lp){
        
        std::cout << "copy assigment operator Called\n";
        this->value = lp.getRawBits();
        
        return *this;
    }
    Fixed::~Fixed()
    {
        std::cout << "Destructor Called\n";
    }
    int Fixed::getRawBits(void) const
    {
        std::cout << "getRawBits member function called\n";
        return(value);
    }
    void    Fixed::setRawBits(int const raw)
    {
        std::cout << "setRawBits member function called\n";
        this->value = raw;
    }