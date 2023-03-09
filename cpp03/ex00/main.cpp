/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:36:43 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/09 20:22:26 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("clap");
    ClapTrap clap2;
    clap.attack("clap");
    clap.takeDamage(10);
    clap.beRepaired(10);
    clap2.attack("clap");
    clap2.takeDamage(10);
    clap2.beRepaired(10);
    return 0;
}