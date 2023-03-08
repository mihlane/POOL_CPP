/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:36:43 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/07 21:23:01 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	ClapTrap ach("ach");
	FragTrap mute("mute");
	
	ach.attack("doki");
	ach.takeDamage(5);
	ach.beRepaired(15);

	mute.attack("ela");
	mute.takeDamage(90);
	mute.beRepaired(20);
	mute.highFivesGuys();
}