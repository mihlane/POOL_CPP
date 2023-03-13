/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 00:14:58 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/14 00:45:00 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP


# include <iostream>

class Base
{
    public:
        virtual ~Base(void) {}
};

class A: public Base
{
    public:
};

class B: public Base
{

};
class C: public Base
{

};

Base * generate(void)
{
    Base *ptr = NULL;
    srand(time(0));
    int i = rand() % 3;
    std::cout << i << std::endl;
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
void identify(Base * p)
{
    if (dynamic_cast<A *>(p) != NULL)
            std::cout << "A\n";
    else if (dynamic_cast<B *>(p) != NULL)
            std::cout << "B\n";
    else 
        std::cout << "C\n";
    
}
void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "the type is A\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     try
    {
        C &c = dynamic_cast<C &>(p);
        std::cout << "the type is C\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
 try
    {
        B &b = dynamic_cast<B &>(p);
        std::cout << "the type is B\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    
       
}

#endif