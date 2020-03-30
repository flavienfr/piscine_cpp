/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 18:24:56 by froussel          #+#    #+#             */
/*   Updated: 2020/03/30 19:22:27 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"
# include <cstdlib>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ZombieHorde horde(atoi(av[1]));
		horde.announce();
	}
	else
		std::cout << "wrong input" << std::endl;
	return (0);
}