/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:28:21 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/05 17:48:52 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP


#include <iostream>
#include <string>
class Contact
{
private:
    std::string first_Name;
    std::string last_Name;
    std::string nickname;
    std::string Darkest_secret;
    std::string phone_number;
public:
     void set(int n, std::string data)
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
    };
    std::string get(int n)
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
    };
    
};

class phonebook
{
private:
    Contact b[8];
public:
    std::string    c_get(int i, int j)
    {
        return b[i].get(j);
    };
    void    c_set(int i, int j, std::string data)
    {
        return b[i].set(j, data);
    };
};

#endif