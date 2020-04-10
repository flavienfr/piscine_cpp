/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 19:50:50 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 23:46:12 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {}	
	virtual int 			getCount() const = 0;
	virtual ISpaceMarine 	*getUnit(int) const = 0;
	virtual int 			push(ISpaceMarine *) = 0;
};

#endif
