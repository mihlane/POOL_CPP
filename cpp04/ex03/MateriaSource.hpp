/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:24:14 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/28 13:05:30 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class MateriaSource
{
    public:
        MateriaSource()
        {
            
        }
        ~MateriaSource() {}
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
#endif