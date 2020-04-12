/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:27:44 by froussel          #+#    #+#             */
/*   Updated: 2020/04/12 15:40:12 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

# include <string>

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &);
	Ice &operator=(const Ice &);
	~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);
};

#endif
