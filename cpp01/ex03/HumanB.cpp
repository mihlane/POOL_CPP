/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:11 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 21:35:59 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

   HumanB::HumanB(std::string str)
    {
        std::cout << "HumanB construcror\n";
        this->name = str;
    }
    HumanB::~HumanB()
    {
        std::cout << "Destructor HumanB\n";
    }
    void    HumanB::setWeapon(Weapon &w)
    {
            this->Human_b = &w;
    }
    void    HumanB::attack()
    {

        if (Human_b)
            std::cout << name << " attacked with " << Human_b->getType() << std::endl;
        else
            std::cout << name << " has no weapon to attak with" << std::endl;
    }