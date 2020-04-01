/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 00:52:49 by froussel          #+#    #+#             */
/*   Updated: 2020/03/31 18:32:27 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string the_type);

	void				setType(std::string the_type);
	const std::string	&getType() const;// get doesn't need to change entity of the class
	~Weapon();
};

#endif
