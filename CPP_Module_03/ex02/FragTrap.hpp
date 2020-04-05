/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:24:22 by froussel          #+#    #+#             */
/*   Updated: 2020/04/05 21:38:54 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <sys/time.h>

# define ERNERGYCOST 25
# define NB_ATTACK 5

class FragTrap : public ClapTrap
{
private:
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

	void	vaulthunter_dot_exe(const std::string &target);
};

#endif
