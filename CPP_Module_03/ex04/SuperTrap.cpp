/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 15:26:48 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 18:25:26 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
	//std::cout << "SuperTrap defautlt Constructor of: " << Name << std::endl;

}

SuperTrap::SuperTrap(std::string the_name) : ClapTrap(the_name), FragTrap(the_name), NinjaTrap(the_name)
{
	HitPoints = FragTrap::HitPoints;
	MaxHitPoints = FragTrap::MaxHitPoints;
	EnergyPoints = NinjaTrap::EnergyPoints;
	MaxEnergyPoints = NinjaTrap::MaxEnergyPoints;
	level = 1;
	Name = the_name;
	MeleeAttackDamage = NinjaTrap::MeleeAttackDamage;
	RangedAttackDamage = FragTrap::RangedAttackDamage;
	ArmorDamageReduction = FragTrap::ArmorDamageReduction;
	std::cout << "SuperTrap Constructor of: " << Name << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &the_SuperTrap)
{
	*this = the_SuperTrap;
}


SuperTrap &SuperTrap::operator=(const SuperTrap &the_SuperTrap)
{
	ClapTrap::operator=(the_SuperTrap);
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destructor of SuperTrap: " << Name << std::endl;
}

void	SuperTrap::RangedAttack(std::string const &target)
{
	FragTrap::RangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
