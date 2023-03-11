/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:36:43 by mhabibi-          #+#    #+#             */
/*   Updated: 2023/03/09 23:22:30 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	ClapTrap ach;
	FragTrap mute("mute");
	ScavTrap doki;
	doki.ClapTrap::attack("mute");
	ach.attack("doki");
	ach.takeDamage(5);
	ach.beRepaired(15);

	mute.attack("ela");
	mute.takeDamage(90);
	mute.beRepaired(20);
	mute.highFivesGuys();
}