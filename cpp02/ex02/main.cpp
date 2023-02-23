/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:01:00 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/19 22:01:14 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "fixed.hpp"

int main( void ) {
Fixed  a;
// Fixed b;
// b++;
Fixed const b( Fixed( 5.05f ) + Fixed( 2 ) );
std::cout << b << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << --a << std::endl;
// std::cout << a+b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}