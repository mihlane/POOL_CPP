/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:07:01 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/11 00:31:22 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
    public:
    Brain();
    ~Brain();
    Brain(const Brain &brain);
    Brain &operator=(const Brain &brain);
    // std::string getIdea(int i) const;
    // void setIdea(int i, std::string idea);
};


#endif