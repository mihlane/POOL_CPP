/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:45:29 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/02/07 14:24:58 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie s;
    Zombie p("po");
    Zombie *h;
    h = newZombie("ddhd");
    s.set("habibi");
    s.announce();
    delete h;
}