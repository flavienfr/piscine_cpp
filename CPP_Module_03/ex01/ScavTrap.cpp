/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:12:12 by froussel          #+#    #+#             */
/*   Updated: 2020/04/05 16:58:52 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : HitPoints(100), MaxHitPoints(100),
EnergyPoints(50), MaxEnergyPoints(50), level(1), Name("Default"),
MeleeAttackDamage(20), RangedAttackDamage(15), ArmorDamageReduction(3)
{
	initChallenge();
	std::cout << "Defautlt méchant constructor of: " << Name << std::endl;
}

ScavTrap::ScavTrap(std::string the_Name) : HitPoints(100), MaxHitPoints(100),
EnergyPoints(50), MaxEnergyPoints(50), level(1), Name(the_Name),
MeleeAttackDamage(20), RangedAttackDamage(15), ArmorDamageReduction(3)
{
	initChallenge();
	std::cout << "Méchant constructor of: " << Name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &the_ScavTrap)
{
	*this = the_ScavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &the_ScavTrap)
{
	MaxHitPoints = the_ScavTrap.MaxHitPoints;
	MaxEnergyPoints = the_ScavTrap.MaxEnergyPoints;
	HitPoints = the_ScavTrap.HitPoints ;
	EnergyPoints = the_ScavTrap.EnergyPoints;
	level = the_ScavTrap.level; 
	Name = the_ScavTrap.Name;
	MeleeAttackDamage = the_ScavTrap.MeleeAttackDamage;
	RangedAttackDamage = the_ScavTrap.RangedAttackDamage;
	ArmorDamageReduction = the_ScavTrap.ArmorDamageReduction;

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

void	ScavTrap::RangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP Méchant: <" << Name << "> attaque <"
	<< target << "> à distance, causant <"
	<< RangedAttackDamage << "> points de dégâts !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP Méchant: <" << Name << "> attaque <"
	<< target << "> de mêlée, causant <"
	<< MeleeAttackDamage << "> points de dégâts !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP Méchant: <" << Name << "> ";
	if (ArmorDamageReduction)
		amount *= (1.f - (float(ArmorDamageReduction) / 100.f));
	if (amount > HitPoints)
	{
		HitPoints = 0;
		std::cout << "est mort et ";
	}
	else
		HitPoints -= amount;
	std::cout << "reçoit une attaque causant <" << amount << "> points de dégâts !" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (HitPoints + amount > MaxHitPoints)
		HitPoints = MaxHitPoints;
	else
		HitPoints += amount;
	std::cout << "FR4G-TP Méchant: <" << Name
	<< "> il se fait réparer de <" << amount << "> points de réparations !" << std::endl;
}

void	ScavTrap::challengeNewcomer()
{
	struct timeval tv;

	std::cout << "FR4G-TP <" << Name << "> ";

	gettimeofday(&tv, nullptr);
	int rand = tv.tv_usec % NB_CHALLENGE;
	std::cout << "Challenge: " << t_challenge[rand] << std::endl;
}
