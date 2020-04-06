/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 17:29:42 by froussel          #+#    #+#             */
/*   Updated: 2020/04/06 18:22:27 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	unsigned int	HitPoints;
	unsigned int	MaxHitPoints;
	unsigned int	EnergyPoints;
	unsigned int	MaxEnergyPoints;
	unsigned int	level;
	std::string		Name;
	unsigned int	MeleeAttackDamage;
	unsigned int	RangedAttackDamage;
	unsigned int	ArmorDamageReduction;

public:
	ClapTrap();
	ClapTrap(unsigned int HitPoints,
			unsigned int MaxHitPoints, unsigned int EnergyPoints,
			unsigned int MaxEnergyPoints,unsigned int level,
			std::string Name, unsigned int MeleeAttackDamage,
			unsigned int RangedAttackDamage, unsigned int ArmorDamageReduction);
	ClapTrap(const ClapTrap &);
	ClapTrap &operator=(const ClapTrap &);
	~ClapTrap();

	void	RangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getname(void);

};

#endif
