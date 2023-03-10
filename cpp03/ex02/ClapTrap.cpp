/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:55:32 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/09 22:02:54 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap default constructor called\n";
	this->Hit_p = 10;
	this->Energy_p = 10;
	this->Attack_dmg = 0;
	this->Name = name;
}

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap constructor called\n"; 
	this->Hit_p = 10;
	this->Energy_p = 10;
	this->Attack_dmg = 0;
	this->Name = "Default";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (Energy_p > 0 && Hit_p > 0)
	{
		std::cout << "ClapTrap " << Name << " attacked "<< target << ", causing " << Hit_p << " points of damage\n";
		Energy_p--;
	}
	else
		std::cout << Name << " Has no enough energy to attak\n";
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Energy_p > 0)
	{
		Energy_p--;
		if ((amount + Hit_p) >= 10)
			Hit_p = 10;
		else
			Hit_p +=amount;
		std::cout << Name << " repaired with " << amount  << " of points\n"; 
	}
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    this->Name = rhs.Name;
    this->Hit_p = rhs.Hit_p;
    this->Energy_p = rhs.Energy_p;
    this->Attack_dmg = rhs.Attack_dmg;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy constructor called\n";
    *this = src;
}