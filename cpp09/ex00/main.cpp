/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:21:38 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/05/04 20:35:42 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: could not open file.\n";
        exit(0);
    }
    std::string h;
    h = "salam cv";
}