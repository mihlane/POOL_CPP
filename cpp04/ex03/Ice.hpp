/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:44:53 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 13:15:34 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

class Ice : public AMateria
{
    public:
    Ice()
    {
        std::cout << "Ice constructor called\n";
    }
    ~Ice()
    {
        std::cout << " Ice destructor called\n";
    }
    std::string const & getType() const //Returns the materia type
    {
        return (type);
    } 
    AMateria* clone() const
    {
        return (new Ice);
    }
    void use(ICharacter& target)
    {
        std::cout << "* shoots an ice bolt at " << target << " *\n";
    }
};

#endif