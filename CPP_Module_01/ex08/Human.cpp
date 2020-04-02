/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:32:40 by froussel          #+#    #+#             */
/*   Updated: 2020/04/02 02:38:15 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	funcTab[0] = {"meleeAttack", &Human::meleeAttack};
	funcTab[1] = {"rangedAttack", &Human::rangedAttack};
	funcTab[2] = {"intimidatingShout", &Human::intimidatingShout};
}

Human::~Human()
{
}

void Human::meleeAttack(std::string const &target)
{
	std::cout << "melee Attack: " << target << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "ranged Attack: " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "intimidating Shout: " << target << std::endl;

}

void Human::action(std::string const &action_name, std::string const &target)
{
	for (int i = 0; i < NB_FUNC; i++)
		if (funcTab[i].name == action_name)
			(this->*funcTab[i].FuncPtr)(target);
}
