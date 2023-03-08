/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:55:28 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/07 14:05:33 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
class ClapTrap
{
private:
        std::string Name;
        unsigned int         Hit_p;
        unsigned int         Energy_p;
        unsigned int         Attack_dmg;
public:
ClapTrap(std::string name);
~ClapTrap();
ClapTrap(const ClapTrap &src);
ClapTrap &operator=(const ClapTrap &rhs);
void attack(const std::string& target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);
};


#endif