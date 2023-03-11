/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:24:14 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 17:57:22 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        ~MateriaSource() ;
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        MateriaSource(MateriaSource const & src);
        MateriaSource & operator=(MateriaSource const & rhs);
    private:
        AMateria *materia[4];
};

#endif