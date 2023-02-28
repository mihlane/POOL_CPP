/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:36:15 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/27 15:21:34 by mhabibi-         ###   ########.fr       */
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
       virtual void makeSound()  const = 0;
      //  {
      //       std::cout << "an animal is making it's own sound\n";
      //  }
       virtual std::string  getType() const 
       {
            return (this->type);
       }
      Animal()
       {
          std::cout << "Animal construcor called \n";
       }
       virtual ~Animal()
       {
          std::cout << "Animal destructor called\n";
       }
    
};

#endif