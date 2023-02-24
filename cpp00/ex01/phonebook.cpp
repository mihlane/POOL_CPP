/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 00:20:14 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/20 00:32:58 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

std::string    Phonebook::c_get(int i, int j)
{
    return b[i].get(j);
}

void    Phonebook::c_set(int i, int j, std::string data)
{
        return b[i].set(j, data);
}