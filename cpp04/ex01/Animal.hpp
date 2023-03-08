/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:36:15 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/08 00:32:57 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
        std::string type;
public:
      Animal();
      Animal(Animal const & src);
      virtual ~Animal();
      virtual void makeSound() const;
      virtual std::string  getType() const ;
      Animal &operator=(Animal const & rhs);
      Animal &operator<<(Animal const & rhs);
};

#endif