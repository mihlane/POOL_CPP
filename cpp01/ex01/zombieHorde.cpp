/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:57:44 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 15:09:07 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N > 0)
    {
        Zombie *z = new Zombie[N];
        while (N--)
        {
            z[N].set(name);
        }
        return (z);
    }
    std::cout << "Number of Zombies is negative  or zero\n";
    return NULL;
}