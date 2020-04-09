/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 16:55:57 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 17:58:00 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() : type(0), hp(0)
{
}

Enemy::Enemy(std::string const & type, int hp) : type(type), hp(hp)
{
}

Enemy::Enemy(const Enemy &the_Enemy)
{
	*this = the_Enemy;
}

Enemy &Enemy::operator=(const Enemy &the_Enemy)
{
	type = the_Enemy.type;
	hp = the_Enemy.hp;

	return (*this);
}

Enemy::~Enemy()
{
}

std::string	Enemy::getType() const
{ return (type); }

int 		Enemy::getHP() const
{ return (hp); }

void 		Enemy::takeDamage(int damage)
{
	if (damage > hp)
		hp = 0;
	else
		hp -= damage;
}
