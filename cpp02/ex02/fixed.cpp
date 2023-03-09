/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:01:09 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/09 03:10:41 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

    std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
    {
    	o << rhs.getRawBits();
    	return o;
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

    Fixed::Fixed (const float floaat)
    {
    	value = roundf(floaat * pow(2, this->fract_bit));
    }
    Fixed::Fixed(Fixed const &src)
    {
        std::cout << "copy constructor Called\n";
        *this = src;
    }
    Fixed& Fixed::operator=(Fixed const &lp){
        
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

    void    Fixed::setRawBits(int const raw)
    {
        std::cout << "setRawBits member function called\n";
        this->value = raw;
    }

    int 	Fixed::toInt( void ) const
    {
    	int int2float;
    
    	int2float = value >> fract_bit;
    	return (int2float);
    }

    float	Fixed::tofloat( void ) const
    {
    	float float2int;
    
    	float2int = (float)value /256;
    	return (float2int);
    }
    Fixed Fixed::operator++(int) 
    {
        Fixed temp = *this;
        value++;
        return temp;
    }
    Fixed Fixed::operator--(int) {
        Fixed temp = *this;
        value--;
        return temp;
    }
    Fixed Fixed::operator +(Fixed const &a)
    {
        Fixed tmp = *this;
        tmp.value = this->value + a.value;
        return (tmp);
    }
    Fixed Fixed::operator -(Fixed const &a)
    {
        Fixed tmp = *this;
        tmp.value = this->value - a.value;
        return (tmp);
    }
    bool Fixed::operator  >(Fixed const &a)
    {
       if (value > a.value)
		    return true;
	    return false;
    }
     bool Fixed::operator  <(Fixed const &a)
    {
        if (value < a.value)
		    return true;
	    return false;
    }
     bool Fixed::operator  >=(Fixed const &a)
    {
       if (value >= a.value)
		    return true;
	    return false;
    }
     bool Fixed::operator  <=(Fixed const &a)
    {
       if (value <= a.value)
		    return true;
	    return false;
    }
     bool Fixed::operator  ==(Fixed const &a)
    {
       if (value == a.value)
		    return true;
	    return false;
    }
     bool Fixed::operator  !=(Fixed const &a)
    {
       if (value != a.value)
		    return true;
	    return false;
    }
    Fixed Fixed::operator *(Fixed const &a)
    {
        Fixed tmp = *this;
       tmp.setRawBits((this->value * a.value) / (1 << fract_bit));
        return (tmp);
    }
       Fixed Fixed::operator /(Fixed const &a)
    {
        Fixed tmp = *this;
       tmp.setRawBits((this->value / a.value) * (1 << fract_bit));
        return (tmp);
    }
    Fixed& Fixed::operator++() {
        ++value;
        return *this;
    }
    Fixed& Fixed::operator--() {
        --value;
        return *this;
    }
    Fixed & Fixed::min(Fixed  &a, Fixed &b)
    {
        if (b.value > a.value)
            return (a);
        return(b);
    }
    Fixed & Fixed::max(Fixed  &a, Fixed &b)
    {
        if (b.value < a.value)
            return (a);
        return(b);
    }
    Fixed const & Fixed::min(Fixed const  &a, Fixed const  &b)
    {
        if (b.value > a.value)
            return (a);
        return(b);
    }
    Fixed const & Fixed::max(Fixed const  &a, Fixed const  &b)
    {
        if (b.value < a.value)
            return (a);
        return(b);
    }