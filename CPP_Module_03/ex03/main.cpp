/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:24:26 by froussel          #+#    #+#             */
/*   Updated: 2020/04/06 18:30:02 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
#include "NinjaTrap.hpp"


int main()
{
	NinjaTrap ninja("Damien");
	ScavTrap scav("Juju");
	FragTrap frag("Patoche");
	ClapTrap clap;

	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(frag);

	return (0);
}