/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 23:11:56 by froussel          #+#    #+#             */
/*   Updated: 2020/03/30 18:03:48 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_ENVENT_HPP
# define ZOMBIE_ENVENT_HPP

# include "Zombie.hpp"
# include <ctime>
# include <cstdlib>

class ZombieEvent
{
private:
	std::string	type;

public:
	ZombieEvent();
	
	void		setZombieType(std::string the_type);
	Zombie		*newZombie (std::string name);
	Zombie		*randomChump();
	void		annouce(Zombie *zb);

	~ZombieEvent();
};

#endif