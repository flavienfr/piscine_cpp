/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 18:25:05 by froussel          #+#    #+#             */
/*   Updated: 2020/03/30 19:31:40 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	if (n > 0)
	{
		nb_zb = n;
		std::srand(std::time(NULL));
		horde = new Zombie[n];
		for (int i = 0; i < n; i++)
		{
			ZombieHorde::randomChump();
			horde[i].SetZombie(name, type);
		}
	}
	else
		std::cout << "Need positive number more than 0." << std::endl;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < nb_zb; i++)
		horde[i].announce();
}

void	ZombieHorde::randomChump()
{
	int 	nb_rand;

	static std::string special[] = {"Boomer", "Hunter", "Smoker","tank","Charger", "Jockey", "Spitter", "Witch"};
	static std::string common[] = {"slow", "fast", "crawling"};
	
	if (std::rand() % 5 == 0)
	{
		nb_rand = std::rand() % (sizeof(special) / sizeof(special[0]));
		name = special[nb_rand];
		type = "special";
	}
	else
	{
		nb_rand= std::rand() % (sizeof(common) / sizeof(common[0]));
		name = common[nb_rand];
		type = "common";
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "DESTRUCTOR: Horde" << std::endl;
	delete[] horde;
}
