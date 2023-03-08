/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:59:48 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/07 22:45:26 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called\n";
    this->type = "Dog";
}
      Dog::Dog(const Dog &dog)
{
    std::cout << "Dog copy constructor called\n";
    this->type = dog.type;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
}
Dog &Dog::operator=(const Dog &dog)
{
    this->type = dog.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "a dog is barking\n";
}
std::string  Dog::getType() const
{
     return (this->type);
}
