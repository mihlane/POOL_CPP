/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:30:15 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/23 13:20:00 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
{
    Weapon club = Weapon("moss");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("ferdi");
    bob.attack();
}
{
    Weapon club = Weapon("ak47");
    HumanB jim("Jim");
    jim.attack();
    club.setType("vector");
    jim.setWeapon(club);
    jim.attack();
}
}
 