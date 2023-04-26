/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:23:11 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/26 13:42:13 by mhabibi-         ###   ########.fr       */
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
        Span();
        ~Span();
        Span(int N);
        Span(Span const &s);
        void    addNumber(int N);
        int    shortestSpan();
        int    longestSpan();
        void    add_by_range();
        Span& opertor=(const Span& s);
        class GradeTooHighException : public std::exception
        {
        public:
        const char * what () const throw ();
        };
};

#endif