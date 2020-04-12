/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:13:11 by froussel          #+#    #+#             */
/*   Updated: 2020/04/12 17:55:13 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
/*	IMateriaSource* src = new MateriaSource();
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
*/
//mytest
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	//src->learnMateria(new Cure());

	Character *tmp_me = new Character("me");
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);	
	//tmp = src->createMateria("cure");
	//me->equip(tmp);

	ICharacter* bob = new Character("bob");
	ICharacter* tony = new Character("tony");

	me->unequip(1);
	me->unequip(0);
	me->use(-1, *bob);
	me->use(1, *bob);
	me->use(0, *bob);
	me->use(2, *bob);
	me->use(1, *tony);
	me->use(3, *bob);

	Character me2(*tmp_me);
std::cout << "--------\n";
	me->use(-1, *bob);
	me->use(1, *bob);
	me->use(0, *bob);
	me->use(2, *bob);
	me->use(1, *tony);
	me->use(3, *bob);

	delete bob;
	delete tony;
	delete me;
	delete tmp_me;
	delete src;

	return 0;
}
