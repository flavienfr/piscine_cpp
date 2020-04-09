/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 17:38:44 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 17:40:30 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy("RadScorpion", 80)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &the_RadScorpion)
{
	*this = the_RadScorpion;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &the_RadScorpion)
{
	Enemy::operator=(the_RadScorpion);
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout <<  "* SPROTCH *" << std::endl;
}
