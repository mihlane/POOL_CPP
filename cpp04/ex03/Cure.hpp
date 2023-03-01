/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:45:23 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 13:12:32 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
    Cure()
    {
        std::cout << "Cure constructor called\n";
    }
    ~Cure()
    {
        std::cout << " Cure destructor called\n";
    }
    std::string const & getType() const //Returns the materia type
    {
        return (type);
    } 
    AMateria* clone() const
    {
        return (new Cure);
    }
    void use(ICharacter& target)
    {
        std::cout << "* shoots an ice bolt at " << target << " *\n";
    }
};

#endif