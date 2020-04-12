/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:27:41 by froussel          #+#    #+#             */
/*   Updated: 2020/04/12 15:40:22 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &the_Cure)
{
	*this = the_Cure;
}

Cure &Cure::operator=(const Cure &the_Cure)
{
	AMateria::operator=(the_Cure);
	return (*this);
}

Cure::~Cure()
{
}

AMateria	*Cure::clone() const
{
	//Cure *cln = new Cure(*this);
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
