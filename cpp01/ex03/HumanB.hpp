/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:13 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/09 23:40:34 by mhabibi-         ###   ########.fr       */
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
    Weapon &Human_b;
public:
    HumanB(std::string str)
    {
        name = str;
    }
    ~HumanB()
    {
        std::cout << "Destructor HumanB\n";
    }
    void    setWeapon(Weapon &w) : HumanB(w)
    {
            this->Human_b = w;
    }
     void    attack()
    {
        std::cout << name << " attacked with " << Human_b.getType() << std::endl;
    }
};

// HumanB::HumanB(/* args */)
// {
// }

// HumanB::~HumanB()
// {
// }

#endif