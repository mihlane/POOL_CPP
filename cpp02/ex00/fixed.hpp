/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:44:28 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/09 01:45:47 by mhabibi-         ###   ########.fr       */
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
        Fixed();
        Fixed(Fixed const &src);
        Fixed& operator=(Fixed const &lp);
        ~Fixed();
        int getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif