/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 16:26:01 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 17:42:25 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"


int	main()
{
/*	PowerFist fist;
	PlasmaRifle rifle;

	AWeapon	*test;
	test = &rifle;

	std::cout << fist.getName() << std::endl;
	std::cout << rifle.getName() << std::endl;
	std::cout << test->getName() << std::endl;

	fist.attack();
	rifle.attack();
	test->attack();
*/
//enemy
	SuperMutant mutant;

	std::cout << mutant.getHP() << std::endl;
	mutant.takeDamage(10);
	std::cout << mutant.getHP() << std::endl;

	RadScorpion scorp;

	std::cout << scorp.getHP() << std::endl;
	scorp.takeDamage(10);
	std::cout << scorp.getHP() << std::endl;

	//canonical test
	//PlasmaRifle other(rifle);
	//std::cout << other.getName() << std::endl;
	//other.attack();
	
	return (0);
}