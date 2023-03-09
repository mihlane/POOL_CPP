/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:26:34 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/09 01:52:37 by mhabibi-         ###   ########.fr       */
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
    int 	toInt( void ) const;
    float	tofloat( void ) const;
};
std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif