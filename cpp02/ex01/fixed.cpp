/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:26:43 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/02 14:10:49 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

float	Fixed::tofloat( void ) const
{
	float float2int;

	float2int = (float)value /256;
	return (float2int);
}

int 	Fixed::toInt( void ) const
{
	int int2float;

	int2float = value >> fract_bit;
	return (int2float);
}

Fixed::Fixed()
{
    std::cout << "Default constructor Called\n";
    this->value = 0;
}

Fixed::Fixed (const int n)
{
    std::cout << "Int constructor called\n";
    this->value = n * pow(2 , this->fract_bit);
    
}
//  Fixed (const float n)
// {
//     std::cout << "Float constructor called\n";
//     this->value = n;
// }
Fixed::Fixed (const float floaat)
{
    value = roundf(floaat * pow(2, this->fract_bit));
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "copy constructor Called\n";
    *this = src;
}

Fixed& Fixed::operator=(Fixed const &lp)
{    
    std::cout << "copy assigment operator Called\n";
    this->value = lp.value;
    
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called\n";
}

float Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called\n";
    float s = (float) value /256;
    return(s);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.getRawBits();
    return o;
}
