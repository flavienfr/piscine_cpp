/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 18:53:40 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 22:16:43 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string the_name) : Victim(the_name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &the_Peon) : Victim(the_Peon.name)
{
	*this = the_Peon;
}

Peon &Peon::operator=(const Peon &the_Peon)
{
	Victim::operator=(the_Peon);
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const
{
	std::cout << name << " was just polymorphed into a pink pony!" << std::endl;
}
