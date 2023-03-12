/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:33:42 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 23:05:07 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void    fun()
{
    Animal *a[10];

    int i = 0;
    while (i < 10)
    {
        a[i] = new Dog(); 
        i++;
        if (i == 5)
        {
            while (i < 10)
            {
                a[i] = new Cat(); 
                i++;
            }
        }
    }
    for (int i = 0; i < 10 ; i++)
    {
        std::cout << a[i]->getType() << std::endl;
        a[i]->makeSound();
    }

    for (int i = 0; i < 10 ; i++)
    {
        delete a[i];
    }
    // return 0;
}
int main(void)
{
    fun();
    WrongAnimal *a = new WrongAnimal();
    WrongAnimal *b = new WrongCat();
    
    a->makeSound();
    b->makeSound();
    // system("leaks Animal");
    // Dog Base("Hello");
    // Dog tmp = Base;
}