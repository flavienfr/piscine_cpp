/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 16:29:37 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 17:45:13 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(30, 30, 120, 120, 1, "Default",60, 5, 0)
{
	std::cout << "Constructeur NinjaTrap de :" << Name << std::endl;
}

NinjaTrap::NinjaTrap(std::string the_name) : ClapTrap(the_name)
{
	EnergyPoints = 120;
	MaxEnergyPoints = 120;
	MeleeAttackDamage = 60;
	ArmorDamageReduction = 5;
	std::cout << "Constructeur NinjaTrap de :" << Name << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &the_NinjaTrap) : ClapTrap(the_NinjaTrap)
{
	*this = the_NinjaTrap;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &the_NinjaTrap)
{
	ClapTrap::operator=(the_NinjaTrap);
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor NinjaTrap de :" << Name << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << Name << " salut son collègue " << target.getname() << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << Name << " donne un coup de poing à " << target.getname() << std::endl;
	
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << Name << " salut " << target.getname() << std::endl;

}

void	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << Name << " dit bonjour à " << target.getname() << std::endl;
}
