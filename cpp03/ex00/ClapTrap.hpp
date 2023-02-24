/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:55:28 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/24 21:15:53 by mhabibi-         ###   ########.fr       */
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
            this->Hit_p = 10;
            this->Energy_p = 10;
            this->Attack_dmg = 0;
            this->Name = name;
        }
        ~ClapTrap()
        {
            std::cout << "Destructor called\n";
        }
        void attack(const std::string& target)
        {
            if (Energy_p > 0)
            {
                std::cout << "ClapTrap" << Name <<target << ", causing " << Hit_p << "points of damage\n";
                Energy_p--;
            }
            else
                std::cout << Name << "Has no enough energy to attak\n";
        }
        void takeDamage(unsigned int amount)
        {
            if (amount >= Hit_p)
            {
                Hit_p = 0;
                std::cout << Name << "has taked " << amount << "of damage\n";
            }
            else
            {
                Hit_p -=amount;
                std::cout << Name << "has taked " << amount << "of damage\n";
            }
        }
        void beRepaired(unsigned int amount)
        {
            if (Energy_p > 0)
            {
                Energy_p--;
                if ((amount + Hit_p) >= 10)
                    Hit_p = 10;
                else
                    Hit_p +=amount;
                std::cout << Name << "repaired with " << amount  << "of points\n"; 
            }
        }
};


#endif