/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 15:26:28 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 18:01:01 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <string>
# include <iostream>

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(std::string the_name);
	SuperTrap(const SuperTrap &);
	SuperTrap &operator=(const SuperTrap &);
	~SuperTrap();

	void	RangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);

};

#endif
