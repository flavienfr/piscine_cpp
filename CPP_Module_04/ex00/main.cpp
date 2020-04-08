/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 18:53:42 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 22:40:24 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sorcerer.hpp"
# include "Victim.hpp"
# include "Peon.hpp"

void	polymorphe(Victim const& v)
{
    v.getPolymorphed();
}

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	
	robert.polymorph(jim);
	robert.polymorph(joe);

	polymorphe(jim);
	polymorphe(joe);// Reference + virtual same exemple outside class

	std::cout << "------------ my test ------------" << std::endl;
	Peon patrick(joe);//Victim patrick(joe);

	std::cout << "name: " << patrick.getname() << std::endl;
	std::cout << "name: " << joe.getname() << std::endl;

	patrick.getPolymorphed();
	robert.polymorph(patrick);
	polymorphe(patrick);
	
	return 0;
}
