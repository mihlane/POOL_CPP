/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 19:27:01 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/11 02:34:28 by mhabibi-         ###   ########.fr       */
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
	try
    {
        Span span(100);
        span.addNumber(10);
        span.addNumber(10);
        span.addNumber(10);
        span.addNumber(10);
        span.add_by_range(1, 100);
        // std::cout << "longest span  : " << span.longestSpan() << std::endl;
        // std::cout << "shortest span : " << span.shortestSpan() << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << exception.what();
    }
    return 0;
}