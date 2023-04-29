/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:27:01 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/04/28 14:09:46 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    	try
	{
		Span span(50);
		span.addNumber(1);
		span.addNumber(3);
		span.addNumber(2);
		std::cout << "longest span  : " << span.longestSpan() << std::endl;
		std::cout << "shortest span : " << span.shortestSpan() << std::endl;
	}
	catch(std::exception& exception)
	{
		std::cout << exception.what();
	}
	try
    {
        Span span(1);
        span.addNumber(100);
        std::vector <int> vect;
        vect.push_back(20);
        vect.push_back(30);
        vect.push_back(0);
		vect.push_back(1);
        span.add_by_range(vect.begin(), vect.end());
        std::cout << "longest span  : " << span.longestSpan() << std::endl;
        std::cout << "shortest span : " << span.shortestSpan() << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << exception.what();
    }
    return 0;
}