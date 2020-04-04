/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:24:24 by froussel          #+#    #+#             */
/*   Updated: 2020/04/04 21:38:23 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : MaxHitPoints(100), HitPoints(100),
MaxEnergyPoints(100), EnergyPoints(100), level(1), Name("Default"),
MeleeAttackDamage(30), RangedAttackDamage(20), ArmorDamageReduction(5)
{
	std::cout << "Defautlt Constructor of: " << Name << std::endl;
	initAttack();
}

FragTrap::FragTrap(std::string the_Name) : MaxHitPoints(100), HitPoints(100),
MaxEnergyPoints(100), EnergyPoints(100), level(1), Name(the_Name),
MeleeAttackDamage(30), RangedAttackDamage(20), ArmorDamageReduction(5)
{
	std::cout << "Constructor of: " << Name << std::endl;
	initAttack();
}


FragTrap::FragTrap(const FragTrap &the_FragTrap)
{
	*this = the_FragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &the_FragTrap)
{
	MaxHitPoints = the_FragTrap.MaxHitPoints;
	MaxEnergyPoints = the_FragTrap.MaxEnergyPoints;
	HitPoints = the_FragTrap.HitPoints ;
	EnergyPoints = the_FragTrap.EnergyPoints;
	level = the_FragTrap.level; 
	Name = the_FragTrap.Name;
	MeleeAttackDamage = the_FragTrap.MeleeAttackDamage;
	RangedAttackDamage = the_FragTrap.RangedAttackDamage;
	ArmorDamageReduction = the_FragTrap.ArmorDamageReduction;

	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of: " << Name << std::endl;
}

void	FragTrap::initAttack()
{
	t_attack[0] = {"Missile", 30};
	t_attack[1] = {"Bombe", 35};
	t_attack[2] = {"Pistolet", 5};
	t_attack[3] = {"Catapulte", 25};
	t_attack[4] = {"pichenette", 2};
}

void	FragTrap::RangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << Name << "> attaque <"
	<< target << "> à distance, causant <"
	<< RangedAttackDamage << "> points de dégâts !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP <" << Name << "> attaque <"
	<< target << "> de mêlée, causant <"
	<< MeleeAttackDamage << "> points de dégâts !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
{
	if (HitPoints + amount > MaxHitPoints)
		HitPoints = MaxHitPoints;
	else
		HitPoints += amount;
	std::cout << "FR4G-TP <" << Name
	<< "> il se fait réparer de <" << amount << "> points de réparations !" << std::endl;
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
