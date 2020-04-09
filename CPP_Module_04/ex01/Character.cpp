/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 17:45:07 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 18:52:41 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Player"), ap(ACTION_POINT), weapon(nullptr)
{
}

Character::Character(std::string const & name) : name(name), ap(ACTION_POINT), weapon(nullptr)
{
}

Character::Character(const Character &the_Character)
{
	*this = the_Character;
}

Character &Character::operator=(const Character &the_Character)
{
	name = the_Character.name;
	ap = the_Character.ap;
	weapon = the_Character.weapon;

	return (*this);
}

Character::~Character()
{
}

std::string		Character::getName() const
{ return (name); }

int				Character::getAP() const
{ return (ap); }

AWeapon			*Character::getWeapon() const
{ return (weapon); }


void	Character::recoverAP()
{
	if (ap + AP_RECOVER > ACTION_POINT)
		ap = ACTION_POINT;
	else
		ap += AP_RECOVER;
}

void	Character::equip(AWeapon *the_weapon)
{
	weapon = the_weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (!weapon)
		return ;
	if (ap < weapon->getAPCost())
		return ;
	std::cout << name << " attaque " << enemy->getType() << " with a " << weapon->getName() << std::endl;
	weapon->attack();
	ap -= weapon->getAPCost();
	enemy->takeDamage(weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}

std::ostream	&operator<<(std::ostream &os, const Character &the_Character)
{
	os << the_Character.getName() << " has " << the_Character.getAP() << " AP and ";
	if (!the_Character.getWeapon())
		os << "is unarmed";
	else
		os << "carries a " << the_Character.getWeapon()->getName();
	os << std::endl;

	return (os);
}
