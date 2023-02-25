/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 11:57:35 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/25 13:07:48 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
        FragTrap( std::string &name)
        {
            std::cout << "constructor called\n";
            this->Hit_p = 100;
            this->Energy_p = 100;
            this->Attack_dmg = 30;
            this->Name = name;  
        }
        FragTrap()
        {
            std::cout << "constructor called\n";
        }
        ~FragTrap()
        {
            std::cout << "Destructor called\n";
        }
        void highFivesGuys(void)
        {
            std::cout << "FragTrap " << this->Name << "is in Gate Keeper mode\n";
        }
        void attack(const std::string& target)
        {
            if (Energy_p > 0)
            {
                std::cout << "FragTrap" << Name <<target << ", causing " << Hit_p << "points of damage\n";
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
                if ((amount + Hit_p) >= 100)
                    Hit_p = 100;
                else
                    Hit_p +=amount;
                std::cout << Name << "repaired with " << amount  << "of points\n"; 
            }
        }
};


#endif