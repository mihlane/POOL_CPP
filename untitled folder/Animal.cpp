/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:59:42 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 00:33:05 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    // std::cout << "Animal construcor called \n";
}

// Animal::Animal(std::string type)
// {
//     this->type = type;
//     // std::cout << "Animal construcor called \n";
// }

Animal::Animal(Animal const & src)
{
    // std::cout << "Animal copy constructor called\n";
    *this = src;
}

Animal::~Animal()
{
    // std::cout << "Animal destructor called\n";
}

void Animal::makeSound() const
{
    // std::cout << "an animal is making it's own sound\n";
}

std::string Animal::getType() const
{
    return (this->type);
}

Animal & Animal::operator<<(Animal const & rhs)
{
    this->type = rhs.type;
    return (*this);
}

Animal & Animal::operator=(Animal const & rhs)
{
    this->type = rhs.type;
    return (*this);
}