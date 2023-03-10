/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:37:52 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 03:13:42 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP
#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain   *c_b;
    public:
        void makeSound() const;
        Cat();
        ~Cat();
        Cat(const Cat &cat);
        Cat &operator=(const Cat &cat);
};

#endif