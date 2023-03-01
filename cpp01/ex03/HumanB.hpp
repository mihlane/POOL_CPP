/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:13 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 21:36:38 by mhabibi-         ###   ########.fr       */
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
    HumanB(std::string str);
    ~HumanB();
    void    setWeapon(Weapon &w);
    void    attack();
};
// HumanB::HumanB(/* args */)
// {
// }

// HumanB::~HumanB()
// {
// }

#endif