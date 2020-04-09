/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 15:17:44 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 16:30:51 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() : name("default"), apcost(0), damage(0)
{}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
name(name), apcost(apcost), damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &the_AWeapon)
{
	*this = the_AWeapon;
}

AWeapon &AWeapon::operator=(const AWeapon &the_AWeapon)
{
	name = the_AWeapon.name;
	apcost = the_AWeapon.apcost;
	damage = the_AWeapon.damage;

	return (*this);
}

AWeapon::~AWeapon()
{
}

std::string	AWeapon::getName() const
{ return (name); }

int	AWeapon::getAPCost() const
{ return (apcost); }

int	AWeapon::getDamage() const
{ return (damage); }
