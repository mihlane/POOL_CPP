/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:55:28 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/19 23:10:08 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
class ClapTrap
{
private:
        std::string Name;
        int         Hit_p = 10;
        int         Energy_p = 10;
        int         Attack_dmg = 0;
public:
        ClapTrap(std::string name)
        {
            std::cout << "constructor called\n";
            this->Name = name;
        }
        ~ClapTrap()
        {
            std::cout << "Destructor called\n";
        }
        void attack(const std::string& target)
        {
            if ()
        }
        void takeDamage(unsigned int amount)
        {
            
        }
        void beRepaired(unsigned int amount)
        {
            
        }
};


#endif