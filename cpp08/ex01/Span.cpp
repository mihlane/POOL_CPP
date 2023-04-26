/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:23:03 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/26 13:44:56 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{
    std::cout << "Span Constructor called\n";    
}

Span::~Span()
{
    std::cout << "Span Destructor called\n";    
}

Span::Span(int N)
{
    this->N = N;
    this->storage.reserve(N);
}

Span::Span(Span const &s)
{
    this->N = s.N;
    this->storage = s.storage;
}

void    Span::addNumber(int N)
{
    if (this->storage.size() < this->N)
        this->storage.push_back(N);
    else
        throw Span::GradeTooHighException();
}

int    Span::shortestSpan()
{
    std::sort(storage.begin(), storage.end());
    return (storage[1] - storage[0]);
}

int Span::longestSpan()
{
    std::sort(storage.begin(), storage.end());
    return (storage[storage.size()] - storage[storage.size() - 1]);
}

const char * Span::GradeTooHighException::what() const throw()
{
    return "Grade is too high\n";
}