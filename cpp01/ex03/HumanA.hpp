/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:09 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/25 12:49:03 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &Human_A;
public:
    HumanA(std::string str, Weapon &hu);
    ~HumanA();
    void    attack()
    {
        std::cout << name << " attacked with " << Human_A.getType() << std::endl;
    }
};

HumanA::HumanA(std::string str, Weapon &hu) : Human_A(hu)
{
   // std::cout << "HumanA constructor\n";
    this->name = str;
}

HumanA::~HumanA()
{
    std::cout << "HumanA Destructor\n";
}

#endif