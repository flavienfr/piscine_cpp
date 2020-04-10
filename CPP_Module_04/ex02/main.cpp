/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 18:19:38 by froussel          #+#    #+#             */
/*   Updated: 2020/04/10 23:21:37 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Squad.hpp"
# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

std::cout << "\nmy test\n";
	ISpaceMarine* jean = new TacticalMarine;
	ISpaceMarine* pierre = new TacticalMarine;
	ISpaceMarine* damien = new AssaultTerminator;
	ISpaceMarine* henri = new AssaultTerminator;
	ISpaceMarine* cloud = new AssaultTerminator;
	Squad t1;
	t1.push(jean);
	t1.push(damien);
	t1.push(jean);
	t1.push(nullptr);
	t1.push(pierre);
	t1.push(damien);
	t1.push(henri);
	t1.push(cloud);

std::cout<< "\nSTART:\n";
	for (int i = 0; i < t1.getCount(); ++i)
	{
		ISpaceMarine* cur = t1.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
std::cout<< "END\n\n";

	Squad t2(t1);

std::cout<< "\nSTART:\n";
	for (int i = 0; i < t2.getCount(); ++i)
	{
		ISpaceMarine* cur = t2.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
std::cout<< "END\n\n";

	return 0;
}
