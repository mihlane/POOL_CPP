/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- < mhabibi-@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:09 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/08 14:54:14 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>

class HumanA
{
private:
    std::string name, Weapon;
public:
    HumanA(/* args */);
    ~HumanA();
    void    attack()
    {
        std::cout << name << "attacked with " << weapon << std::endl;
    }
};

HumanA::HumanA(/* args */)
{
}

HumanA::~HumanA()
{
}

#endif