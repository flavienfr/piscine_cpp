/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:58:11 by froussel          #+#    #+#             */
/*   Updated: 2020/03/29 19:10:32 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	status = 0;
	std::cout << "Pony name: " << std::flush;
	std::getline(std::cin, name);
	std::cout << name << "'s favorite meal: " << std::flush;
	std::getline(std::cin, favoritemeal);
}

void	Pony::pony_dance()
{
	status = 1;
	std::cout << name << " is dancing"<< std::endl;
}

void	Pony::pony_eat()
{
	std::string food;

	status = 2;
	std::cout << name << " is eating " << std::flush;
	std::getline(std::cin, food);
	if (food == favoritemeal)
		std::cout << "it favorite meal" << std::endl;
}

void	Pony::pony_sleep()
{
	status = 3;
	std::cout << name << " is sleeping"<< std::endl;
}

Pony::~Pony()
{
	std::cout << "\nOh no! " << name << " died when it was ";
	switch (status)
	{
	case 1:
		std::cout << "dancing" << std::endl;
		break;
	case 2:
		std::cout << "eating" << std::endl;
		break;
	case 3:
		std::cout << "sleeping" << std::endl;
		break;
	default:
		std::cout << "doing nothing" << std::endl;
		break;
	}
}