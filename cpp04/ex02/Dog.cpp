/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:59:48 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 03:17:18 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called\n";
    this->brain = new Brain();
    this->type = "Dog";
}
 Dog::Dog(const Dog &dog)
{
    std::cout << "Dog copy constructor called\n";
    *this = dog;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
    delete this->brain;
}
Dog &Dog::operator=(const Dog &dog)
{
    if (this->brain)
        delete this->brain;
    this->brain = new Brain();
    this->brain = dog.brain;
    this->type = dog.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "a dog is barking\n";
}