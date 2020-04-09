/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 16:21:21 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 17:04:27 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &the_PowerFist)
{
	*this = the_PowerFist;
}

PowerFist &PowerFist::operator=(const PowerFist &the_PowerFist)
{
	AWeapon::operator=(the_PowerFist);
	return (*this);
}

PowerFist::~PowerFist()
{
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
