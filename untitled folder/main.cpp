/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:33:42 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/10 12:00:26 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    Animal *a[10];

    int i = 0;
    while (i < 10)
    {
        a[i] = new Dog("Rocky"); 
        i++;
        if (i == 5)
        {
            while (i < 10)
            {
                a[i] = new Cat("Tom"); 
                i++;
            }
        }
    }

    for (int i = 0; i < 10 ; i++)
    {
        std::cout << a[i]->getType() << std::endl;
    }

    for (int i = 0; i < 10 ; i++)
    {
        delete a[i];
    }
    return 0;
    // Dog Base("Hello");
    // Dog tmp = Base;
}