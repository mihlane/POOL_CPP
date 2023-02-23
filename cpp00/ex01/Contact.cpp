/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:17:14 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/20 00:35:18 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::set(int n, std::string data)
{
    if (n == 1)
        first_Name = data;
    else if (n == 2)
        last_Name = data;
    else if (n == 3)
        nickname = data;
    else if (n == 4)
        Darkest_secret = data;
    else if (n == 5)
        phone_number = data;
}

std::string     Contact::get(int n)
{
    if (n == 1)
        return (first_Name);
    else if (n == 2)
        return (last_Name);
    else if (n == 3)
        return (nickname);
    else if (n == 4)
        return (Darkest_secret);
    else if (n == 5)
        return (phone_number);
    return NULL;
}

