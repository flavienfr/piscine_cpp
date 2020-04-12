/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 19:00:40 by froussel          #+#    #+#             */
/*   Updated: 2020/04/12 17:24:54 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# include <string>

# define NB_MATERIA 4

class Character : public ICharacter
{
private:
	std::string		name;
	int				count_materia;
	int				inuse_materia;
	AMateria		*materia[NB_MATERIA];

public:
	Character();
	Character(std::string name);
	Character(const Character &);
	Character &operator=(const Character &);
	~Character();

	std::string	const &getName() const;
	void		equip(AMateria *m);
	void		unequip(int idx);
	void		use(int idx, ICharacter& target);
};

#endif
