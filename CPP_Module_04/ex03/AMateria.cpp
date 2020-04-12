/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:13:18 by froussel          #+#    #+#             */
/*   Updated: 2020/04/12 15:59:36 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0)
{
}

AMateria::AMateria(std::string const &type) : _xp(0), type(type)
{
}

AMateria::AMateria(const AMateria &the_AMateria)
{
	*this = the_AMateria;
}

AMateria &AMateria::operator=(const AMateria &the_AMateria)
{
	_xp = the_AMateria._xp;
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return (type);
}

unsigned int	AMateria::getXP() const
{
	return (_xp);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}
