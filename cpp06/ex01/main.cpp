/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 00:05:52 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/13 23:19:05 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Serializer casting;
    Data *ptr = new Data;


    ptr->a  = 1337;
    ptr->b  = "habibi";
    std::cout << ptr->a << " " << ptr->b << "\n";



    uintptr_t   uptr    = casting.serialize(ptr);
    std::cout << uptr << " " << uptr << "\n";
    Data        *dptr   = casting.deserialize(uptr);

    std::cout << dptr->a << " " << dptr->b << "\n";

    delete ptr;
}