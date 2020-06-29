/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:13:11 by froussel          #+#    #+#             */
/*   Updated: 2020/06/29 22:26:36 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

std::cout << "--------\n";
//mytest
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Cure());
	//src2->learnMateria(new Cure());

	Character *tmp_me = new Character("me1");
	ICharacter* me1 = new Character("me1");

	AMateria* tmp2;
	tmp2 = src2->createMateria("ice");
	me1->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	me1->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	me1->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	me1->equip(tmp2);	
	//tmp2 = src2->createMateria("cure");
	//me1->equip(tmp2);

	ICharacter* bob1 = new Character("bob1");
	ICharacter* tony1 = new Character("tony1");

	me1->unequip(1);
	me1->unequip(0);
	me1->use(-1, *bob1);
	me1->use(1, *bob1);
	me1->use(0, *bob1);
	me1->use(2, *bob1);
	me1->use(1, *tony1);
	me1->use(3, *bob1);

	Character me2(*tmp_me);
std::cout << "--------\n";
	me1->use(-1, *bob1);
	me1->use(1, *bob1);
	me1->use(0, *bob1);
	me1->use(2, *bob1);
	me1->use(1, *tony1);
	me1->use(3, *bob1);

	delete bob1;
	delete tony1;
	delete me1;
	delete tmp_me;
	delete src2;

	return 0;
}
