/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:26:34 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/25 12:10:47 by mhabibi-         ###   ########.fr       */
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
        this->value = n * pow(2 , this->fract_bit);
        
    }
    //  Fixed (const float n)
    // {
    //     std::cout << "Float constructor called\n";
    //     this->value = n;
    // }
    Fixed (const float floaat)
{
	value = roundf(floaat * pow(2, this->fract_bit));
}
    Fixed(Fixed const &src)
    {
        std::cout << "copy constructor Called\n";
        *this = src;
    }
    Fixed& operator=(Fixed const &lp){
        
        std::cout << "copy assigment operator Called\n";
        this->value = lp.value;
        
        return *this;
    }
    ~Fixed()
    {
        std::cout << "Destructor Called\n";
    }
    float getRawBits(void) const
    {
        // std::cout << "getRawBits member function called\n";
        float s = (float) value /256;
        return(s);
    }


    int 	toInt( void ) const
{
	int int2float;

	int2float = value >> fract_bit;
	return (int2float);
}

// Converting its internal representation to a floating-point number

float	tofloat( void ) const
{
	float float2int;

	float2int = (float)value /256;
	return (float2int);
}
    // float   tofloat(void) const
    // {
    //     return ((float) (value / (1 << fract_bit)));
    // }
    // int toInt(void)const
    // {
    //     int i = (this->value  >> fract_bit);
    //     // std::cout << i << std::endl;
    //     return ( i);
    // }
    // std::ostream & operator<<(std::ostream & o , Fixed const &obj)
    // {
    //     o << obj.getRawbits();
    //     return (o);
    // }
};
    std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
	o << rhs.getRawBits();
	return o;
}

#endif