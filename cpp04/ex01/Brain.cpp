/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:06:54 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 00:36:07 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <stdio.h>

Brain::Brain()
{
    std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain &brain)
{
    std::cout << "Brain copy constructor called\n";
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = brain.ideas[i];
    }
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}

Brain &Brain::operator=(const Brain &brain)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
    return (*this);
}

// std::string Brain::getIdea(int i) const
// {
//     return (this->ideas[i]);
// }

// void Brain::setIdea(int i, std::string idea)
// {
//     this->ideas[i] = idea;
// }
