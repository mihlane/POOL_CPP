/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:59:42 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 00:30:07 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called\n";
     this->type = "Animal";
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor called\n";
     *this = animal;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal &Animal::operator=(const Animal &animal)
{
     std::cout << "Animal Copy assignment operator called" << std::endl;
     this->type = animal.type;
     return (*this);
}

void Animal::makeSound() const
{
     std::cout << "an animal is making it's own sound\n";
}

std::string  Animal::getType() const 
{
     return (this->type);
}

