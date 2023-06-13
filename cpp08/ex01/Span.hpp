/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:23:11 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/12 20:47:56 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include <vector>
#include <algorithm>
#include <array>

class Span
{
private:
        unsigned int N;
        std::vector<int> storage;
public:
        Span(unsigned int N);
        Span(Span const &s);
        Span& operator=(const Span& s);
        ~Span();
        void    addNumber(int N);
        int    shortestSpan();
        int    longestSpan();
        void    add_by_range(unsigned int i, unsigned int j);
        class Wrong_Size_Exception : public std::exception
        {
                public:
                const char * what () const throw ();
        };
};

#endif