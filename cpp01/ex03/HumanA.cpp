/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:07 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 21:36:05 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &hu) : Human_A(hu)
{
   std::cout << "HumanA constructor\n";
    this->name = str;
}

HumanA::~HumanA()
{
    std::cout << "HumanA Destructor\n";
}
void    HumanA::attack()
{
        std::cout << name << " attacked with " << Human_A.getType() << std::endl;
}