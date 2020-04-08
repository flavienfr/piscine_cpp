/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 18:53:34 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 21:16:35 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon();
	Peon(std::string the_name);
	Peon(const Peon &);
	Peon &operator=(const Peon &);
	~Peon();

	virtual void	getPolymorphed() const;
/*
** Il n'est pas nécessaire de mettre «virtual» devant
** les méthodes des classes filles. Elles sont automatiquement
** virtuelles par héritage. Personnellement, je préfère
** le mettre pour me souvenir de leur particularité.
*/
};

#endif
