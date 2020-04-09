/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 15:17:39 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 16:40:47 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
private:
	std::string	name;
	int			apcost;
	int			damage;

public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon &);
	AWeapon &operator=(const AWeapon &);
	virtual ~AWeapon();//pourqoui virtual destru

	virtual std::string		getName() const;//pourquoi virual
	int						getAPCost() const;
	int						getDamage() const;
	virtual void			attack() const = 0;
};

#endif
