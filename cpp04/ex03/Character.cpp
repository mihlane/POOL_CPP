/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 03:26:52 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 17:49:06 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character(std::string const & type) : type(type)
{
    std::cout << "Character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

Character::Character()
{
    this->type = "default";
    std::cout << "Character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->materia[i])
            delete this->materia[i];
}

std::string const & Character::getName() const
{
    return type;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return ;
    if (this->materia[idx])
        this->materia[idx]->use(target);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] == NULL)
        {
            this->materia[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return ;
    if (this->materia[idx])
        this->materia[idx] = NULL;
}

Character & Character::operator=(Character const & rhs)
{
    (void)rhs;
    return *this;
}

Character::Character(Character const & src)
{
    *this = src;
}
