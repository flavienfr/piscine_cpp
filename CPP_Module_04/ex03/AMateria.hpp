/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:13:10 by froussel          #+#    #+#             */
/*   Updated: 2020/04/12 16:43:46 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

# include <string>
# include <iostream>

class ICharacter;

class AMateria
{
private:
	unsigned int	_xp;
	std::string		type;

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &);
	AMateria &operator=(const AMateria &);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia typ
	unsigned int getXP() const; //Returns the Materia's XP
	
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
