/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 00:54:45 by froussel          #+#    #+#             */
/*   Updated: 2020/03/31 18:32:27 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string the_type)
{
	type = the_type;
}

void Weapon::setType(std::string the_type)
{
	type = the_type;
}

const std::string &Weapon::getType() const
{
	return (type);
}

Weapon::~Weapon()
{

}