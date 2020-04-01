/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 23:26:35 by froussel          #+#    #+#             */
/*   Updated: 2020/04/01 18:12:56 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int		main(int ac, char ** av)
{
	//std::cout << basename(av[1]);
	if (ac == 4)
		return (Replace::replace(av[1], av[2], av[3]));
	return (0);
}
