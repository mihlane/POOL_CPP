/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 11:57:46 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/07 21:26:51 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name)
{
    std::cout << "constructor called\n";
    this->Hit_p = 100;
    this->Energy_p = 100;
    this->Attack_dmg = 30;
    this->Name = name;  
}

FragTrap::FragTrap()
{
    std::cout << "constructor called\n";
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->Name << " is in Gate Keeper mode\n";
}

void FragTrap::attack(const std::string& target)
{
    if (Energy_p > 0)
    {
        std::cout << "FragTrap " << Name << " attacked " << target << ", causing " << Hit_p << " points of damage\n";
        Energy_p--;
    }
    else
        std::cout << Name << " Has no enough energy to attak\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
    if ((int)amount >= Hit_p)
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

void FragTrap::beRepaired(unsigned int amount)
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

FragTrap::FragTrap(const FragTrap &frag)
{
    std::cout << "Copy constructor called\n";
    *this = frag;
}

FragTrap &FragTrap::operator=(const FragTrap &frag)
{
    std::cout << "Assignation operator called\n";
    this->Hit_p = frag.Hit_p;
    this->Energy_p = frag.Energy_p;
    this->Attack_dmg = frag.Attack_dmg;
    this->Name = frag.Name;
    return *this;
}