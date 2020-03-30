/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 14:53:24 by froussel          #+#    #+#             */
/*   Updated: 2020/03/30 18:20:34 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#define NB_ZOMBIE 2

int main()
{
	ZombieEvent special;
	ZombieEvent common;
	Zombie		*zombie_special[NB_ZOMBIE];
	Zombie		*zombie_common[NB_ZOMBIE];
	Zombie		zombie_other[NB_ZOMBIE];
	Zombie		*witch;

	special.setZombieType("special");
	common.setZombieType("common");

	std::cout << "Special creation random" << std::endl;
	for (int i = 0; i < NB_ZOMBIE; i++)
	{
		zombie_special[i] = special.randomChump();
		zombie_special[i]->advert();
	}
	std::cout << "Common creation random" << std::endl;
	for (int i = 0; i < NB_ZOMBIE; i++)
	{
		zombie_common[i] = common.randomChump();
		zombie_common[i]->advert();
	}
	std::cout << "Other creation" << std::endl;
	for (int i = 0; i < NB_ZOMBIE; i++)
	{
		zombie_other[i].SetZombie("zombie", "other");
		zombie_other[i].advert();
	}
	std::cout << "Witch creation" << std::endl;
	witch = special.newZombie("Witch");
	witch->advert();
	for (int i = 0; i < NB_ZOMBIE; i++)
	{
		delete zombie_special[i];
		delete zombie_common[i];
	}
	delete witch;

	return 0;
}