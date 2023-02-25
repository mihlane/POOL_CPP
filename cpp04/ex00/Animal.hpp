/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:36:15 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/25 17:50:48 by mhabibi-         ###   ########.fr       */
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
       virtual void makeSound() const
       {
            std::cout << "an animal is making it's own sound\n";
       }
       virtual std::string  getType() const 
       {
            return (this->type);
       }
    
};

#endif