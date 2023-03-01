/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:20 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 21:41:04 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    std::string const &getType();
    void    setType(std::string const &str);
    Weapon();
    Weapon(std::string const &str);
    ~Weapon();
};

// Weapon::Weapon(/* args */)
// {
// }

// Weapon::~Weapon()
// {
// }

#endif