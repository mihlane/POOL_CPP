/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:36:15 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/07 23:13:55 by mhabibi-         ###   ########.fr       */
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
     Animal(const Animal &animal);
     virtual ~Animal();
     Animal &operator=(const Animal &animal);     
     virtual void makeSound() const;
     virtual std::string  getType() const;
};

#endif