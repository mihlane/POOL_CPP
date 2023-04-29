/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:23:03 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/28 14:09:10 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


// Span::Span()
// {
//     std::cout << "Span Constructor called\n";    
// }

Span::~Span()
{
    std::cout << "Span Destructor called\n";    
}

Span::Span(unsigned int N)
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
    if (storage.size() < 2)
        throw Span::GradeTooHighException();
    std::sort(storage.begin(), storage.end());
    int i = 10;
    std::vector<int>::iterator it;
    std::vector<int>::iterator it2;
    it = storage.begin();
    it2 = storage.begin() + 1;
    i = *it2 - *it;
    while ( it2 != (storage.end()))
    {
        if (*it2 - *it < i)
            i =*it2 - *it;
        it++;
        it2++;
    }
    return (i);
}

int Span::longestSpan()
{
    if (storage.size() < 2)
        throw Span::GradeTooHighException();
    std::sort(storage.begin(), storage.end());
    return (storage[storage.size() - 1] - storage[0] );
}

const char * Span::GradeTooHighException::what() const throw()
{
    return "Grade is too high\n";
}

Span& Span::operator=(const Span& s)
{
    this->N = s.N;
    this->storage = s.storage;
    return (*this);
}

void    Span::add_by_range(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    if (this->storage.size() + std::distance(start, end) > this->N)
        throw Span::GradeTooHighException();
    this->storage.insert(this->storage.end(), start, end);
}