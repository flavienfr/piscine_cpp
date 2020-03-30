/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 15:09:10 by froussel          #+#    #+#             */
/*   Updated: 2020/03/30 18:17:22 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::srand(std::time(NULL));
}

void		ZombieEvent::setZombieType(std::string the_type)
{
	type = the_type;
}

void	ZombieEvent::annouce(Zombie *zb)
{
	zb->advert();
}

Zombie		*ZombieEvent::newZombie (std::string name)
{
	Zombie *zb;
	
	zb = new Zombie();
	zb->SetZombie(name, type);
	return (zb);
}

Zombie		*ZombieEvent::randomChump()
{
	int 	nb_rand;

	static std::string special[] = {"Boomer", "Hunter", "Smoker",
	"tank","Charger", "Jockey", "Spitter", "Witch"};
	static std::string common[] = {"slow", "fast", "crawling"};

	if (type == "special")
	{
		nb_rand = std::rand() % (sizeof(special) / sizeof(special[0]));
		return (newZombie (special[nb_rand]));
	}
	nb_rand= std::rand() % (sizeof(common) / sizeof(common[0]));
	
	return (newZombie (common[nb_rand]));
}


ZombieEvent::~ZombieEvent()
{
	std::cout << "DESTRUCTOR: ZombieEvent type: " << type << std::endl;
}