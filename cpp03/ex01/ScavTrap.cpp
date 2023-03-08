/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:11:42 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/07 14:38:23 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
// #include <iostream>

ScavTrap::ScavTrap()
{
    std::cout << "constructor called\n";
    this->Hit_p = 100;
    this->Energy_p = 50;
    this->Attack_dmg = 20;
    this->Name = "default";
}

ScavTrap::ScavTrap( std::string name)
{
    std::cout << "constructor called\n";
    this->Hit_p = 100;
    this->Energy_p = 50;
    this->Attack_dmg = 20;
    this->Name = name;  
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    std::cout << "copy constructor called\n";
    *this = src;

}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "assignation operator called\n";
    this->Name = rhs.Name;
    this->Hit_p = rhs.Hit_p;
    this->Energy_p = rhs.Energy_p;
    this->Attack_dmg = rhs.Attack_dmg;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " is in Gate Keeper mode\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (Energy_p > 0)
    {
        std::cout << "ScavTrap " << Name << " attacks "<<target << " , causing " << Hit_p << " points of damage\n";
        Energy_p--;
    }
    else
        std::cout << Name << " Has no enough energy to attak\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (amount >= Hit_p)
    {
        Hit_p = 0;
        std::cout << Name << " has taked " << amount << " of damage\n";
    }
    else
    {
        Hit_p -=amount;
        std::cout << Name << " has taked " << amount << " of damage\n";
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (Energy_p > 0)
    {
        Energy_p--;
        if ((amount + Hit_p) >= 100)
            Hit_p = 100;
        else
            Hit_p +=amount;
        std::cout << Name << " repaired with " << amount  << " of points\n"; 
    }
}