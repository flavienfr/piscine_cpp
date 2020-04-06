/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 17:29:43 by froussel          #+#    #+#             */
/*   Updated: 2020/04/06 18:29:43 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoints(0), MaxHitPoints(0), EnergyPoints(0),
			MaxEnergyPoints(0), level(0), Name("Default"), MeleeAttackDamage(0),
			RangedAttackDamage(0), ArmorDamageReduction(0)
{
	std::cout << "Constructeur par défault ClapTrap de :" << Name << std::endl;
}

ClapTrap::ClapTrap(unsigned int HitPoints, unsigned int MaxHitPoints,
			unsigned int EnergyPoints, unsigned int MaxEnergyPoints,
			unsigned int level, std::string Name, unsigned int MeleeAttackDamage,
			unsigned int RangedAttackDamage, unsigned int ArmorDamageReduction) :
			HitPoints(HitPoints), MaxHitPoints(MaxHitPoints), EnergyPoints(EnergyPoints),
			MaxEnergyPoints(MaxEnergyPoints), level(level), Name(Name), MeleeAttackDamage(MeleeAttackDamage),
			RangedAttackDamage(RangedAttackDamage), ArmorDamageReduction(ArmorDamageReduction)
{
	std::cout << "Constructeur ClapTrap de :" << Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &the_ClapTrap)
{
	*this = the_ClapTrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &the_ClapTrap)
{
	MaxHitPoints = the_ClapTrap.MaxHitPoints;
	MaxEnergyPoints = the_ClapTrap.MaxEnergyPoints;
	HitPoints = the_ClapTrap.HitPoints ;
	EnergyPoints = the_ClapTrap.EnergyPoints;
	level = the_ClapTrap.level; 
	Name = the_ClapTrap.Name;
	MeleeAttackDamage = the_ClapTrap.MeleeAttackDamage;
	RangedAttackDamage = the_ClapTrap.RangedAttackDamage;
	ArmorDamageReduction = the_ClapTrap.ArmorDamageReduction;

	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Déstructeur ClapTrap de :" << Name << std::endl;
}

void	ClapTrap::RangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << Name << "> attaque <"
	<< target << "> à distance, causant <"
	<< RangedAttackDamage << "> points de dégâts !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << Name << "> attaque <"
	<< target << "> de mêlée, causant <"
	<< MeleeAttackDamage << "> points de dégâts !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP <" << Name << "> ";
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

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints + amount > MaxHitPoints)
		HitPoints = MaxHitPoints;
	else
		HitPoints += amount;
	std::cout << "FR4G-TP <" << Name
	<< "> il se fait réparer de <" << amount << "> points de réparations !" << std::endl;
}

std::string	ClapTrap::getname()
{
	return (Name);
}
