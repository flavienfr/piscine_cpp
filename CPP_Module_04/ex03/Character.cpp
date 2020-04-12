/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 19:01:48 by froussel          #+#    #+#             */
/*   Updated: 2020/04/12 17:49:49 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Default"), count_materia(0), inuse_materia(0)
{}

Character::Character(std::string name) : name(name), count_materia(0), inuse_materia(0)
{}

Character::Character(const Character &the_Character)
{
	*this = the_Character;
}

Character &Character::operator=(const Character &the_Character)
{
	name = the_Character.name;
	count_materia = the_Character.count_materia;
	inuse_materia = the_Character.inuse_materia;
	for (int i = 0; i < inuse_materia; i++)
		materia[i] = the_Character.materia[i];
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < count_materia; i++)
		delete materia[i];
}

std::string	const &Character::getName() const
{ return (name); }

void		Character::equip(AMateria *m)
{
	if (!m)
		return ;
	if (inuse_materia < NB_MATERIA)
	{
		materia[inuse_materia] = m;
		inuse_materia++;
		count_materia++;
	}
}

void		Character::unequip(int idx)
{
	if (idx >= 0 && idx < inuse_materia)
	{
		AMateria *tmp = materia[idx];
		materia[idx] = materia[inuse_materia - 1];
		materia[inuse_materia - 1] = tmp;
		inuse_materia--;
	}
}

void		Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < inuse_materia)
		materia[idx]->use(target);
}

