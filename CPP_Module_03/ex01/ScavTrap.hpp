/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:12:08 by froussel          #+#    #+#             */
/*   Updated: 2020/04/05 16:54:35 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <sys/time.h>

# define NB_CHALLENGE 3

class ScavTrap
{
private:
	unsigned int	HitPoints;
	unsigned int	MaxHitPoints;
	unsigned int	EnergyPoints;
	unsigned int	MaxEnergyPoints;
	unsigned int	level;
	std::string		Name;
	unsigned int	MeleeAttackDamage;
	unsigned int	RangedAttackDamage;
	unsigned int	ArmorDamageReduction;

	void		initChallenge(void);
	std::string	t_challenge[NB_CHALLENGE];

public:
	ScavTrap();
	ScavTrap(std::string the_Name);
	ScavTrap(const ScavTrap &);
	ScavTrap &operator=(const ScavTrap &);
	~ScavTrap();

	void	RangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(void);
};

#endif
