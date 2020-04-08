/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 18:53:38 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 22:27:06 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	std::cout << "The victime need a name" << std::endl;
	std::cout << "Name: ";
	getline(std::cin, name);
	std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(std::string the_name)
{
	name = the_name;
	std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &the_Victim)
{
	*this = the_Victim;
}

Victim &Victim::operator=(const Victim &the_Victim)
{
	name = the_Victim.name;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "The victim "<< name << " died for no apparent reasons!" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const Victim &vict)
{
	os << "I'm " << vict.getname() << " and I like otters!" << std::endl;;
	return (os);
}

std::string	Victim::getname() const
{ return (name); }

void	Victim::getPolymorphed() const
{
	std::cout << name << " was just polymorphed in a cute little sheep!" << std::endl;
}
