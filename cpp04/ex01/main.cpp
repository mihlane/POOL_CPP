/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:33:42 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/10 22:10:50 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// void    fun(void)
// {
//         const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound();
//     j->makeSound(); 
//     meta->makeSound(); 
//     delete j;
//     delete i;
//     delete meta;
// }

// int main()
// {
// fun(); 
// // while(1){};
//     return 0;
// }

// #include "Animal.hpp"
// #include "Cat.hpp"
// #include "Dog.hpp"
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
    system("leaks Animal");
    // Dog Base("Hello");
    // Dog tmp = Base;
}

// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j;
//     delete i;
//     const Animal* a[100];
//     for (int i = 0; i < 50; i++)
//         a[i] = new Dog();
//     for (int i = 50; i < 100; i++)
//         a[i] = new Cat();
//     for (int i = 0; i < 100; i++)
//         delete a[i];
//     return 0;
// }