/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:11:02 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/07 15:05:47 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
private:
        std::string name;
public:
        Zombie();
        Zombie(std::string str);
        void    announce(void);
        void    set(std::string str)
        {
                name = str;
        }
        std::string     get(void)
        {
                return (name);
        }
        ~Zombie();
};
Zombie* zombieHorde( int N, std::string name);

#endif