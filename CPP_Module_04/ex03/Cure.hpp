/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 16:27:36 by froussel          #+#    #+#             */
/*   Updated: 2020/04/12 15:40:17 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

# include <string>

class Cure : public AMateria
{	
public:
	Cure();
	Cure(const Cure &);
	Cure &operator=(const Cure &);
	~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);
};

#endif
