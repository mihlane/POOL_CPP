/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:23:11 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/17 16:28:01 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
private:
        int N;
public:
        Span();
        ~Span();
        Span(int n);
        Span(Span const &s);
};

#endif