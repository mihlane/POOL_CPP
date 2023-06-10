/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:27:01 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/10 05:33:38 by mhabibi-         ###   ########.fr       */
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
    std::cout << "longest span  : " << sp.longestSpan() << std::endl;
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
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
    std::cout << "helo\n";
	try
    {
        Span span(100000);
        span.addNumber(100000);
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