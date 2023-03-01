/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:39:44 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/01 20:38:01 by mhabibi-         ###   ########.fr       */
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

#endif