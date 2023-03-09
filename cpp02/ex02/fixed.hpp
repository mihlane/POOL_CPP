/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:00:58 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/09 03:06:57 by mhabibi-         ###   ########.fr       */
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
    Fixed();
    Fixed (const int n);
    Fixed (const float floaat);
    Fixed(Fixed const &src);
    Fixed& operator=(Fixed const &lp);
    ~Fixed();
    float getRawBits(void) const;
    void   setRawBits(int const raw);
    int 	toInt( void ) const;
    float	tofloat( void ) const;
    Fixed operator++(int);
    Fixed operator--(int);
    Fixed operator +(Fixed const &a);
    Fixed operator -(Fixed const &a);
    bool operator  >(Fixed const &a);
    bool operator  <(Fixed const &a);
    bool operator  >=(Fixed const &a);
    bool operator  <=(Fixed const &a);
    bool operator  ==(Fixed const &a);
    bool operator  !=(Fixed const &a);
    Fixed operator *(Fixed const &a);
    Fixed operator /(Fixed const &a);
    Fixed& operator++();
    Fixed& operator--();
    static Fixed & min(Fixed  &a, Fixed &b);
    static Fixed & max(Fixed  &a, Fixed &b);
    static Fixed const & min(Fixed const  &a, Fixed const  &b);
    static Fixed const & max(Fixed const  &a, Fixed const  &b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif