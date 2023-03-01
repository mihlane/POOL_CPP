/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:11:34 by mhabibi-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/25 12:07:57 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
        ScavTrap( std::string &name)
        {
            std::cout << "constructor called\n";
            this->Hit_p = 100;
            this->Energy_p = 50;
            this->Attack_dmg = 20;
            this->Name = name;  
        }
        ScavTrap()
        {
            std::cout << "constructor called\n";
        }
        ~ScavTrap()
        {
            std::cout << "Destructor called\n";
        }
        void guardGate()
        {
            std::cout << "ScavTrap " << this->Name << "is in Gate Keeper mode\n";
        }
        void attack(const std::string& target)
        {
            if (Energy_p > 0)
            {
                std::cout << "ScavTrap" << Name <<target << ", causing " << Hit_p << "points of damage\n";
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
=======
/*   Updated: 2023/02/19 23:11:35 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> ee25497c0f86a284243042dda551f9c770e69ea8
