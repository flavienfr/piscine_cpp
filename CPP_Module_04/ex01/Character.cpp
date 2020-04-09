/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 17:45:07 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 18:03:11 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Player"), ap(ACTION_POINT)
{
}

Character::Character(std::string const & name) : name(name), ap(ACTION_POINT)
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

void	Character::attack(Enemy *enemy)
{
	std::cout << name << " attaque " << enemy->getType << " with a " << weapon->getName << std::endl;
}
