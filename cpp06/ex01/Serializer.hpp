/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 00:06:10 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 23:03:21 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

struct  Data
{
    int         a;
    std::string b;
};

class Serializer
{
    public:
        Serializer();
        Serializer(Serializer const & src);
        ~Serializer();
        Serializer & operator=(Serializer const & rhs);
        
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};

#endif