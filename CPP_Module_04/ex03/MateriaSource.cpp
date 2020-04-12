/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 22:50:10 by froussel          #+#    #+#             */
/*   Updated: 2020/04/12 16:55:18 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : count_materia(0)
{
}

MateriaSource::MateriaSource(const MateriaSource &the_MateriaSource)
{
	*this = the_MateriaSource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &the_MateriaSource)
{
	count_materia = the_MateriaSource.count_materia;
	for (int i = 0; i < count_materia; i++)
		materia[i] = the_MateriaSource.materia[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < count_materia; i++)
		delete materia[i];
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	if (count_materia < NB_MATERIA)
	{
		materia[count_materia] = m;
		count_materia++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < count_materia; i++)
		if (materia[i]->getType() == type)
			return (materia[i]->clone());
	return (nullptr);
}
