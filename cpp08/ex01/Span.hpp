/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:23:11 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/28 14:04:32 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
        unsigned int N;
        std::vector<int> storage;
public:
        // Span();
        Span(unsigned int N);
        ~Span();
        Span(Span const &s);
        void    addNumber(int N);
        int    shortestSpan();
        int    longestSpan();
        void    add_by_range(std::vector<int>::iterator start, std::vector<int>::iterator end);
        Span& operator=(const Span& s);
        class GradeTooHighException : public std::exception
        {
        public:
        const char * what () const throw ();
        };
};

#endif