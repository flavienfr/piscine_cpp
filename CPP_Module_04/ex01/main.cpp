/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 16:26:01 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 19:07:25 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

# include <iostream>


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

//enemy
	SuperMutant mutant;

	std::cout << mutant.getHP() << std::endl;
	mutant.takeDamage(10);
	std::cout << mutant.getHP() << std::endl;

	RadScorpion scorp;

	std::cout << scorp.getHP() << std::endl;
	scorp.takeDamage(10);
	std::cout << scorp.getHP() << std::endl;
*/
//canonical test
	//PlasmaRifle other(rifle);
	//std::cout << other.getName() << std::endl;
	//other.attack();

//test sujet
	Character* moi = new Character("moi");
	
	std::cout << *moi;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;


/*	Enemy* c = new SuperMutant();

	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->recoverAP();
	std::cout << *moi;*/


	delete pr;
	delete pf;
	delete moi;

	return (0);
}