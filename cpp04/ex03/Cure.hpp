/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:45:23 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 16:10:42 by mhabibi-         ###   ########.fr       */
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
    Cure();
    ~Cure();
    AMateria* clone() const;
    void use(ICharacter& target);
    Cure & operator=(Cure const & rhs);
    Cure(Cure const & src);
};

#endif