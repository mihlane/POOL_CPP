/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:20 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/09 23:21:45 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
private:
    std::string type;
public:
    std::string const &getType()
    {
        return type;
    }
    void    setType(std::string const &str)
    {
        this->type = str;
    }
    Weapon()
    {
        std::cout << "Weapon constructor\n";
    }
    Weapon(std::string const &str)
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