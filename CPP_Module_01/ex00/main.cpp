/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:58:09 by froussel          #+#    #+#             */
/*   Updated: 2020/03/29 19:19:45 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony	pony;

	pony.pony_eat();
}

void	ponyOnTheHeap()
{
	Pony	*pony_heap;

	pony_heap = new Pony();
	pony_heap->pony_sleep();
	pony_heap->pony_dance();
	delete pony_heap;
}

int		main()
{
	std::cout << "I'm ponyOnTheStack\n" << std::endl;
	ponyOnTheStack();

	std::cout << "I'm ponyOnTheHeap\n" << std::endl;
	ponyOnTheHeap();
	
	return (0);
}
