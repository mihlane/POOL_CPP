/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:22:04 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 14:41:09 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
    protected :
    std::string type;
    MateriaSource m[4];
    int i ;
    public:
    Character(std::string type)
    {
        std::cout << "Character constructor called \n";
        i = 0;
        this->type = type;
    }
    ~Character() 
    {
        std::cout << "Character destructor called \n";
    }
    std::string const & getName() const
    {
        return (Name);
    }
    void equip(AMateria* m)
    {
        if (i < 4)
        {
            this->m[i] = m;
            i++;
        }
    }
    Character operator  ==(Character const &a)
    {
       return(this->value == a.value);
    }
    void unequip(int idx);
    void use(int idx, ICharacter& target)
    {
        if (idx >=0 && idx < 4)
        {
            if (this->m[idx] != NULL)
            {
                m[idx] = target;
            }
        }
    }
};

#endif