/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:39:44 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/10 21:25:38 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP

#include <iostream>

class Harl
{
    private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    public:
    void complain( std::string level );
};
void    Harl::debug()
{
    std::cout << "debuggg\n";
}
void    Harl::info()
{
    std::cout << "info\n";
}
void    Harl::warning()
{
    std::cout << "warning\n";
}
void    Harl::error()
{
    std::cout << "error\n";
}
void    Harl::complain(std::string level)
{
    void    (Harl::*ptr[4])() =
    {
       &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string lst[4] = 
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    for (size_t i = 0; i < sizeof(lst) / sizeof(lst[0]) ; i++)
    {
        if (lst[i] == level)
        {    
            (this->*ptr[i])();
                return ;
        }
    }
    std::cout << "No complaints, everything is good.\n";
}
#endif