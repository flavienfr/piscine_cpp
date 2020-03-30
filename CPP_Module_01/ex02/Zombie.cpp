/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 14:31:59 by froussel          #+#    #+#             */
/*   Updated: 2020/03/30 17:48:15 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void	Zombie::SetZombie(std::string the_name, std::string the_type)
{
	name = the_name;
	type = the_type;
}

void	Zombie::advert()
{
	std::cout << "<" << name << " (" <<type << ")" << ">"
	<< " Braiiiiiiinnnssss ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "DESTRUCTOR: Zombie name: " << name << std::endl;
}