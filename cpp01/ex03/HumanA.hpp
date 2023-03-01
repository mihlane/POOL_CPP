/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:09 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 21:34:14 by mhabibi-         ###   ########.fr       */
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
    void    attack();
};



#endif