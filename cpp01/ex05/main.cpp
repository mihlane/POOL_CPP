/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:39:21 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/10 21:26:33 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    Client;
         
    {
        Client.complain("INFO");
        Client.complain("WARNING");
        Client.complain("ERROR");
    }
    
    {
        Client.complain("AEBUGDEBUG");   
        Client.complain("SEBUG");
        Client.complain("");
    }
    return (0);
}