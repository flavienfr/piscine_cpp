/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 18:53:37 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 21:05:34 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	std::cout << "The sorcer need a name and a title" << std::endl;
	std::cout << "Name: ";
	getline(std::cin, name);
	std::cout << "Title: ";
	getline(std::cin, title);
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string the_name, std::string the_title)
{
	name = the_name;
	title = the_title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}


Sorcerer::Sorcerer(const Sorcerer &the_Sorcerer)
{
	*this = the_Sorcerer;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &the_Sorcerer)
{
	name = the_Sorcerer.name;
	title = the_Sorcerer.title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const Sorcerer &sorce)
{
	os << "I am " << sorce.getname() << ", " << sorce.gettitle() << ", and i like ponies!" << std::endl;;
	return (os);
}

std::string	Sorcerer::getname() const
{ return (name); }

std::string	Sorcerer::gettitle() const
{ return (title); }

void	Sorcerer::polymorph(Victim const &victime) const
{
	victime.getPolymorphed();
}
