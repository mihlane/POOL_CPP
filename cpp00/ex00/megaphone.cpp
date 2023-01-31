/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:46:05 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/01/29 00:24:42 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char ** av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		int i = 1;
		int z ;
	while (i < ac)
	{
		z = 0;
		while (av[i][z])
		{
			char c = toupper(av[i][z]);
			std::cout << c;
			z++;
		}
		i++;
	}
	std::cout << std::endl;
	}	
}