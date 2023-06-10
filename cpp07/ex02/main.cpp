/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 01:17:19 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/10 01:24:15 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


class Empty {
	public:
		int p;
		Empty(){this->p = 3;}
};

int	main()
{
	Array<int>	test(5);

	for (unsigned int i = 0; i < test.size(); i++)
		test[i] = i;
	for (unsigned int i = 0; i < test.size(); i++)
		std::cout << test[i] << " ";
	std::cout << std::endl;
	std::cout << "Size of the Array is: " << test.size() << std::endl;

	Array<char> test2(5);
	for (unsigned int i = 0; i < test2.size(); i++)
		test2[i] = 'z';
	for (unsigned int i = 0; i < test2.size(); i++)
		std::cout << test2[i] << " ";
	std::cout << std::endl;
	std::cout << "Size of the Array is: " << test2.size() << std::endl;
	try {
		std::cout << test[1] << std::endl;
		// std::cout << test[6] << std::endl;
	} catch (std::exception &excep)
	{
		std::cout << excep.what();
	}
	
	Array<std::string> test3(3);
	for (unsigned int i = 0; i < test3.size(); i++)
		test3[i] = "HELLO";
	for (unsigned int i = 0; i < test3.size(); i++)
		std::cout << test3[i] << " ";
	std::cout << std::endl;
	std::cout << "Size of the Array is: " << test3.size() << std::endl;

	Array<Empty> test4(2);
	for (unsigned int i = 0; i < test4.size(); i++)
		test4[i].p = 8;
	for(unsigned int i = 0; i < test4.size(); i++)
		std::cout << test4[i].p << " ";
	std::cout << std::endl;
	std::cout << "Size of the Array is: " << test4.size() << std::endl;
}