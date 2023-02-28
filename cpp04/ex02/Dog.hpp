/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:37:11 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/26 17:31:27 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
     private:
        Brain *d_b;
    public:
         void makeSound() const
       {
            std::cout << "a dog is barikng\n";
       }
       std::string  getType() const
       {
            return (this->type);
       }
       Dog()
       {
          std::cout << "dog constructor called\n";
          d_b = new Brain();
       }
       ~Dog()
       {
          std::cout << "Dog Destructor called\n";
          delete d_b;
       }
};

#endif