/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 00:06:10 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/09 02:59:30 by mhabibi-         ###   ########.fr       */
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
    private:
        Serializer();
    public:
        Serializer(Serializer const& src);
        Serializer& operator=(Serializer const& rhs);  
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        ~Serializer();
};

#endif