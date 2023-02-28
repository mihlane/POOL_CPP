/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:37:52 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/26 17:39:39 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP
#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain   *c_b;
    public:
        void makeSound() const
        {
            std::cout << "a cat is meowing\n";
        }
       std::string  getType() const
       {
            return (this->type);
       }
       Cat()
       {
            std::cout << "Cat constructor called\n";
            c_b = new Brain();
       }
       ~Cat()
       {
            std::cout << "cat Destructor calledd\n";
            delete c_b;
       }
};

#endif