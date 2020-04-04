/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:24:26 by froussel          #+#    #+#             */
/*   Updated: 2020/04/04 21:36:59 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"


int main()
{
	FragTrap test("Patrap");

	//test.RangedAttack("ennemy_1");
	//test.meleeAttack("ennemy_1");
	test.takeDamage(110);
	test.takeDamage(110);
	test.beRepaired(100);
	test.takeDamage(99);
	test.takeDamage(6);
	test.takeDamage(2);
	test.takeDamage(2);
	test.beRepaired(1000);
	test.takeDamage(500);

	test.vaulthunter_dot_exe("Fab");
	test.vaulthunter_dot_exe("Fab");
	test.vaulthunter_dot_exe("Fab");
	test.vaulthunter_dot_exe("Fab");
	test.vaulthunter_dot_exe("Fab");
	return (0);
}