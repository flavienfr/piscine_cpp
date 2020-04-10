/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 21:42:08 by froussel          #+#    #+#             */
/*   Updated: 2020/04/10 22:48:53 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

# include <iostream>

typedef struct	s_marines
{
	ISpaceMarine		*marine;
	struct s_marines	*next;
}				marines;

class Squad : public ISquad
{
private:

	struct s_marines	*list_marines;
	int					count;

	marines		*create_marine(ISpaceMarine *the_marine);

public:
	Squad();
	Squad(const Squad &);
	Squad &operator=(const Squad &);
	~Squad();

	virtual int 			getCount() const;
	virtual ISpaceMarine 	*getUnit(int) const;
	virtual int 			push(ISpaceMarine *);
};

#endif
