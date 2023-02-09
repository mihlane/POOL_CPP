/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- < mhabibi-@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:13 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/08 14:53:55 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

class HumanB::Weapon
{
private:
    std::string name;
    int weapon;
public:
    HumanB(/* args */);
    ~HumanB();
    void    setWeapon(class Weapon)
    {
            
    }
};

HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{
}

#endif