/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 22:48:20 by froussel          #+#    #+#             */
/*   Updated: 2020/04/12 17:24:50 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define NB_MATERIA 4

class MateriaSource : public IMateriaSource
{
private:
	int				count_materia;
	AMateria		*materia[NB_MATERIA];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &);
	MateriaSource &operator=(const MateriaSource &);
	~MateriaSource();

	void learnMateria(AMateria *);
	AMateria* createMateria(std::string const & type);
};

#endif
