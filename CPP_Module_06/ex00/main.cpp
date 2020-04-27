/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 17:13:58 by froussel          #+#    #+#             */
/*   Updated: 2020/04/25 00:56:30 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

int	main(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		if (!av[i])
			return (1);
		std::string s = av[i];
		cast caster(s);
	}

	return (0);
}
