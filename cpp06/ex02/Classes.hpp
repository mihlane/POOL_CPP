/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 00:14:58 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/06/09 03:28:31 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP


# include <iostream>

class Base
{
    public:
        virtual ~Base(void);
};

class A: public Base
{
    
};

class B: public Base
{

};

class C: public Base
{

};

Base * generate(void);
void identify(Base *p);
void identify(Base &p);

#endif