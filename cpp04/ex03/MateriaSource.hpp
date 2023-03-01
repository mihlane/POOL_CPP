/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:24:14 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 13:24:09 by mhabibi-         ###   ########.fr       */
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
            std::cout << "MateriaSource constructor called\n";
        }
        ~MateriaSource() 
        {
            std::cout << "MateriaSource destructor called\n";
        }
        void learnMateria(AMateria*)
        {
            
        }
        AMateria* createMateria(std::string const & type);
};
#endif