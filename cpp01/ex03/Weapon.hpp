/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- < mhabibi-@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:20 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/08 18:23:43 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
private:
    std::string type;
public:
    std::string getType()
    {
        return type;
    }
    void    setType(std::string str)
    {
        type = str;
    }
    Weapon()
    {
        std::cout << "Weapon constructor\n";
    }
    Weapon(std::string str)
    {
        std::cout << "Weapon paramitreized constructor\n";
        this->type = str;
    }
    ~Weapon()
    {
        std::cout << "Weapon Destructor\n";
    }
};

// Weapon::Weapon(/* args */)
// {
// }

// Weapon::~Weapon()
// {
// }

#endif