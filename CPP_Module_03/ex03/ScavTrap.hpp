/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:12:08 by froussel          #+#    #+#             */
/*   Updated: 2020/04/05 21:38:48 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <sys/time.h>

# define NB_CHALLENGE 3

class ScavTrap : public ClapTrap
{
private:
	void		initChallenge(void);
	std::string	t_challenge[NB_CHALLENGE];

public:
	ScavTrap();
	ScavTrap(std::string the_Name);
	ScavTrap(const ScavTrap &);
	ScavTrap &operator=(const ScavTrap &);
	~ScavTrap();

	void	challengeNewcomer(void);
};

#endif
