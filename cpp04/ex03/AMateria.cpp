/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 03:26:33 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 17:48:36 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria()
{
    this->type = "default";
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria use called" << target.getName() <<  std::endl;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
    (void)rhs;
    return *this;
}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
}
