/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 00:07:33 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/09 02:36:24 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer constructor" << std::endl;
}

Serializer::Serializer(Serializer const & src)
{
    std::cout << "Serializer copy constructor" << std::endl;
    *this = src;
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructor" << std::endl;
}

Serializer & Serializer::operator=(Serializer const & rhs)
{
    std::cout << "Serializer assignation operator" << std::endl;
    (void)rhs;
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}