/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:32:38 by froussel          #+#    #+#             */
/*   Updated: 2020/04/02 02:36:58 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main ()
{
	Human human;

	human.action("intimidatingShout", "Loco");
	human.action("meleeAttack", "diego silva");
	human.action("rangedAttack", "Patrick Humecte");
	human.action("rien", "Patrick dort");
	return(0);
}
