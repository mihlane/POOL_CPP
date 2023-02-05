/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:11:02 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/05 18:55:12 by mhabibi-         ###   ########.fr       */
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
        void    announce(void)
        {
            std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
        }
        void    set(std::string str)
        {
                name = str;
        }
        std::string     get(void)
        {
                return (name);
        }
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
};

#endif