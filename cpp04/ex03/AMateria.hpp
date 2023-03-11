/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:32:09 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 17:41:22 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
class ICharacter;
class AMateria
{
protected:
        std::string type;
public:
    AMateria(std::string const & type);
    AMateria();
    virtual ~AMateria();
    AMateria(AMateria const & src);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
    AMateria & operator=(AMateria const & rhs);
};

#endif