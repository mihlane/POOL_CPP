/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:23:11 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/24 16:27:59 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include <vector>
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
        void    shortestSpan();
        void    longestSpan();
        void    add_by_range();
        Span& opertor=(const Span& sp);
};

#endif