/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:44:28 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/10 23:01:05 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class fixed
{
private:
    int value;
    static const int fract_bit = 8;
public:
    fixed()
    {
        this->value = 0;
    }
    ~fixed();
    int getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif