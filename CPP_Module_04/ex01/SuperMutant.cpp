/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 17:19:58 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 17:39:19 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy("Super Mutant", 170)
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &the_SuperMutant)
{
	*this = the_SuperMutant;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &the_SuperMutant)
{
	Enemy::operator=(the_SuperMutant);
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

void	SuperMutant::takeDamage(int damage)
{
	damage = damage < DAMAGE_REDUCT ? 0 : damage - DAMAGE_REDUCT;
	Enemy::takeDamage(damage);
}