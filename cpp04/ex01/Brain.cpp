/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:06:54 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 23:39:34 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <stdio.h>

Brain::Brain()
{
    std::cout << "Brain constructor called\n";
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Idea " + std::to_string(i);
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

