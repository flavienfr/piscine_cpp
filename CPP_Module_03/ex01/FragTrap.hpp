/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:24:22 by froussel          #+#    #+#             */
/*   Updated: 2020/04/05 16:02:24 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include <sys/time.h>

# define ERNERGYCOST 25
# define NB_ATTACK 5

class FragTrap
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

	void	initAttack(void);
	struct s_attack
	{
		std::string	name;
		int			damage;
	};
	s_attack	t_attack[NB_ATTACK];

public:
	FragTrap();
	FragTrap(std::string the_Name);
	FragTrap(const FragTrap &);
	FragTrap &operator=(const FragTrap &);
	~FragTrap();

	void	RangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(const std::string &target);
};

#endif
