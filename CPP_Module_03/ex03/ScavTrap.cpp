/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:12:12 by froussel          #+#    #+#             */
/*   Updated: 2020/04/05 22:11:57 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, "Default",20, 15, 3)
{
	initChallenge();
	std::cout << "Defautlt méchant constructor of: " << Name << std::endl;
}

ScavTrap::ScavTrap(std::string the_Name) : ClapTrap(100, 100, 50, 50, 1, the_Name, 20, 15, 3)
{
	initChallenge();
	std::cout << "Méchant constructor of: " << Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &the_ScavTrap) : ClapTrap(the_ScavTrap)
{
}

ScavTrap &ScavTrap::operator=(const ScavTrap &the_ScavTrap)
{
	ClapTrap::operator=(the_ScavTrap);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Méchant destructor of: " << Name << std::endl;
}

void	ScavTrap::initChallenge(void)
{
	t_challenge[0] = "Duel de cowboy";
	t_challenge[1] = "Course de voiture";
	t_challenge[2] = "Marelle";
}

void	ScavTrap::challengeNewcomer()
{
	struct timeval tv;

	std::cout << "FR4G-TP <" << Name << "> ";

	gettimeofday(&tv, nullptr);
	int rand = tv.tv_usec % NB_CHALLENGE;
	std::cout << "Challenge: " << t_challenge[rand] << std::endl;
}
