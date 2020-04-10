/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 21:42:01 by froussel          #+#    #+#             */
/*   Updated: 2020/04/10 23:08:36 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : list_marines(nullptr), count(0)
{
}

Squad::Squad(const Squad &the_Squad)
{
	*this = the_Squad;
}

Squad &Squad::operator=(const Squad &the_Squad)
{
	marines	*tmp_marines;
	marines	*cure_marines;
	marines	*last_marines = nullptr;

	count = the_Squad.count;
	if (count == 0)
		list_marines = nullptr;
	else
	{
		tmp_marines = the_Squad.list_marines;
		cure_marines = new marines;
		list_marines = cure_marines;
		cure_marines->marine = tmp_marines->marine->clone();
		cure_marines->next = nullptr;
		last_marines = cure_marines;
		tmp_marines = tmp_marines->next;
		while (tmp_marines)
		{
			cure_marines = new marines;
			cure_marines->marine = tmp_marines->marine->clone();
			cure_marines->next = nullptr;
			if (last_marines)
				last_marines->next = cure_marines;
			last_marines = cure_marines;
			tmp_marines = tmp_marines->next;
		}
	}

	return (*this);
}

Squad::~Squad()
{
	marines	*tmp_marines = list_marines;

	while (list_marines)
	{
		tmp_marines = list_marines->next;
		delete list_marines->marine;
		delete list_marines;
		list_marines = tmp_marines;
	}
}

int 			Squad::getCount() const
{ return (count); }

ISpaceMarine 	*Squad::getUnit(int pos) const
{
	marines	*tmp_marines = list_marines;
	
	if (pos < 0 || pos > count)
		return (nullptr);
	int i = 0;
	while (tmp_marines)
	{
		if (i == pos)
			return (tmp_marines->marine);
		tmp_marines = tmp_marines->next;
		i++;
	}
	return (nullptr);
}

marines	*Squad::create_marine(ISpaceMarine *the_marine)
{
	marines	*tmp_marines;

	tmp_marines = new struct s_marines;
	tmp_marines->marine = the_marine;
	tmp_marines->next = nullptr;
	count++;

	return (tmp_marines);
}

int		Squad::push(ISpaceMarine *the_marine)
{
	if (!the_marine)
		return (count);
	if (!list_marines)
		list_marines = create_marine(the_marine);
	else
	{
		marines	*tmp_marines = list_marines;
		while (tmp_marines->next)
		{
			if (tmp_marines->marine == the_marine)
				return (count);
			tmp_marines = tmp_marines->next;
		}
		if (tmp_marines->marine == the_marine)
			return (count);
		tmp_marines->next = create_marine(the_marine);
	}
	return (count);
}
