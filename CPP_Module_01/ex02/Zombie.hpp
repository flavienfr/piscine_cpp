/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 23:07:10 by froussel          #+#    #+#             */
/*   Updated: 2020/03/30 17:47:22 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string	name;
	std::string	type;

public:
	Zombie();
	
	void	SetZombie(std::string the_name, std::string the_type);
	void	advert();

	~Zombie();
};

#endif