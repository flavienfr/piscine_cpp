/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 17:45:08 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 18:01:48 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

# include <string>
# include <iostream>

# define ACTION_POINT 40

class Character
{
private:
	std::string	name;
	int			ap;
	AWeapon		*weapon;

public:
	Character();
	Character(std::string const & name);
	Character(const Character &);
	Character &operator=(const Character &);
	~Character();//virtual ?

	std::string		getName() const;//virtual ?

	void			recoverAP();
	void			equip(AWeapon *);
	void			attack(Enemy *);
};

#endif
