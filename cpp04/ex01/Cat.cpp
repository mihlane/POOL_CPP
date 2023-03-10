/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:59:54 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 22:58:11 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called\n";
    this->brain = new Brain();
    this->type = "Cat";
}
Cat::Cat(const Cat &cat)
{
    std::cout << "Cat copy constructor called\n";
    *this = cat;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
    delete this->brain;
}
Cat &Cat::operator=(const Cat &cat)
{
    if (this->brain)
        delete this->brain;
    this->brain = new Brain();
    *this->brain = *(cat.brain);
    this->type = cat.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "a cat is meowing\n";
}