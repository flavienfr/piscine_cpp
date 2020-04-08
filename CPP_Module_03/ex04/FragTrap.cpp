/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:24:24 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 18:25:01 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, "Default",30, 20, 5)
{
	std::cout << "FragTrap defautlt Constructor of: " << Name << std::endl;
	initAttack();
}

FragTrap::FragTrap(std::string the_Name) : ClapTrap(the_Name)
{
	HitPoints = 100;
	MaxHitPoints = 100;
	RangedAttackDamage = 20;
	ArmorDamageReduction = 5;
	std::cout << "Constructor of FragTrap: " << Name << std::endl;
	initAttack();
}

FragTrap::FragTrap(const FragTrap &the_FragTrap) : ClapTrap(the_FragTrap)
{
	*this = the_FragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &the_FragTrap)
{
	ClapTrap::operator=(the_FragTrap);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap: " << Name << std::endl;
}

void	FragTrap::initAttack()
{
	t_attack[0] = {"Missile", 30};
	t_attack[1] = {"Bombe", 35};
	t_attack[2] = {"Pistolet", 5};
	t_attack[3] = {"Catapulte", 25};
	t_attack[4] = {"pichenette", 2};
}

void	FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	struct timeval tv;

	std::cout << "FR4G-TP <" << Name << "> ";
	if (ERNERGYCOST > EnergyPoints)
	{
		std::cout << "Not enough ernergy" << std::endl;
		return ;
	}
	else
		EnergyPoints -= ERNERGYCOST;
	gettimeofday(&tv, nullptr);
	int rand = tv.tv_usec % 5;
	std::cout << "launches the random attack: " << t_attack[rand].name
	<< " on " << target << " with " << t_attack[rand].damage << std::endl;
}
