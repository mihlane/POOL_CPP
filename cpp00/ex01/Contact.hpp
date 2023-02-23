/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:17:17 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/20 00:34:55 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP


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
     void set(int n, std::string data);
    std::string get(int n);
    
};

#endif