/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:59:54 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 03:15:47 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called\n";
    this->c_b = new Brain();
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
    delete this->c_b;
}

Cat &Cat::operator=(const Cat &cat)
{
    if (this->c_b)
        delete this->c_b;
    this->c_b = new Brain();
    *this->c_b = *cat.c_b;
    this->type = cat.type;
    return (*this);
}
