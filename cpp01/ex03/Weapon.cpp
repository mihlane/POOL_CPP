/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:18 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 21:39:37 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

    std::string const &Weapon::getType()
    {
        return type;
    }
    void    Weapon::setType(std::string const &str)
    {
        this->type = str;
    }
    Weapon::Weapon()
    {
       std::cout << "Weapon constructor\n";
    }
    Weapon::Weapon(std::string const &str)
    {
        std::cout << "Weapon paramitreized constructor\n";
        this->type = str;
    }
    Weapon::~Weapon()
    {
        std::cout << "Weapon Destructor\n";
    }