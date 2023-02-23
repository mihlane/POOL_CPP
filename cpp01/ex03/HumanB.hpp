/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:13 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/23 13:18:16 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *Human_b;
public:
    HumanB(std::string str)
    {
        this->name = str;
    }
    ~HumanB()
    {
        std::cout << "Destructor HumanB\n";
    }
    void    setWeapon(Weapon &w)
    {
            this->Human_b = &w;
    }
     void    attack()
    {

        if (Human_b)
            std::cout << name << " attacked with " << Human_b->getType() << std::endl;
        else
            std::cout << name << " has no weapon to attak with" << std::endl;
    }
};

// HumanB::HumanB(/* args */)
// {
// }

// HumanB::~HumanB()
// {
// }

#endif