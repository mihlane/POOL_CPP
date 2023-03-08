/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:11:34 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/07 13:34:32 by mhabibi-         ###   ########.fr       */
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
ScavTrap( std::string name);
ScavTrap();
ScavTrap(const ScavTrap &src);
ScavTrap &operator=(const ScavTrap &rhs);

// ScavTrap()
// {
//     std::cout << "constructor called\n";
// }
~ScavTrap();
void guardGate();
void attack(const std::string& target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);
};


#endif
