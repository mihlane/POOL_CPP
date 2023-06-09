/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 00:15:05 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/09 03:28:24 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base:: ~Base(void){};

Base * generate(void)
{
    Base *ptr = NULL;
    srand(time(0));
    int i = rand() % 3;
    switch (i)
    {
        case 0:
        {
            ptr = new A;
            break;
        }
        case 1:
        {
            ptr = new B;
            break;
        }
        case 2:
        {
            ptr = new C;
            break;
        }
    }
    return ptr;
    
}
void identify(Base *p)
{
    if (dynamic_cast<A*>(p) != NULL)
            std::cout << "A\n";
    else if (dynamic_cast<B*>(p) != NULL)
            std::cout << "B\n";
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C\n";
    
}
void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "the type is A\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "the type is C\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "the type is B\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}
