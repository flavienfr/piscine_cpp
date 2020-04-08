/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:24:26 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 18:34:47 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"


int main()
{
	ScavTrap	scav("Juju");
	SuperTrap	super("Michael");

	std::cout << std::endl;

	super.ninjaShoebox(scav);
	super.vaulthunter_dot_exe("testeur");
	super.vaulthunter_dot_exe("testeur");
	super.vaulthunter_dot_exe("testeur");
	super.vaulthunter_dot_exe("testeur");
	super.vaulthunter_dot_exe("testeur");
	super.takeDamage(150);
	super.beRepaired(50);
	super.takeDamage(50);

	std::cout << std::endl;


	return (0);
}